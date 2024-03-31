#include "BlockHeader.hpp"

BlockHeader::BlockHeader(std::string prevHash, std::string merkleRootHash, int nounce,
                         float timestamp, std::string Hash) {
    this->prevHash = prevHash;
    this->merkleRootHash = merkleRootHash;
    this->nounce = nounce;
    this->timestamp = timestamp;
    this->Hash = Hash;
}
