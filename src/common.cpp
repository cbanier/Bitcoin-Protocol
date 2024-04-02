#include <openssl/sha.h>
#include <iomanip>
#include <iostream>
#include <sstream>

#include "common.hpp"

std::string sha256(const std::string& str) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.size());
    SHA256_Final(hash, &sha256);

    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];

    return ss.str();
}

/* ********************************************************************** */

const std::vector<std::string> _reformatLeafValues(std::vector<std::string>& leafValues) {
    size_t nextPowerOf2 = 1;
    while (nextPowerOf2 < leafValues.size()) nextPowerOf2 <<= 1;

    if (nextPowerOf2 / 2 == leafValues.size()) return leafValues;

    while (leafValues.size() < nextPowerOf2) leafValues.push_back(leafValues.back());

    return leafValues;
}