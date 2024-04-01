#include <openssl/sha.h>

#include "common.hpp"

std::vector<unsigned char> sha256(const std::string& str) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.size());
    SHA256_Final(hash, &sha256);

    return std::vector<unsigned char>(hash, hash + SHA256_DIGEST_LENGTH);
}

/* ********************************************************************** */

const std::vector<std::string> _reformatLeafValues(std::vector<std::string>& leafValues) {
    size_t nextPowerOf2 = 1;
    while (nextPowerOf2 < leafValues.size()) nextPowerOf2 <<= 1;

    if (nextPowerOf2 / 2 == leafValues.size()) return leafValues;

    while (leafValues.size() < nextPowerOf2) leafValues.push_back("");

    return leafValues;
}