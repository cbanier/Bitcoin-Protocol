#include "BlockHeader.hpp"

BlockHeader::BlockHeader(std::string prevHash, std::string merkleRootHash, int nounce,
                         float timestamp, std::string hash) {
    this->prevHash = prevHash;
    this->merkleRootHash = merkleRootHash;
    this->nounce = nounce;
    this->timestamp = timestamp;
    this->hash = this->getBlockHeaderHash();
}

std::string BlockHeader::getBlockHeaderHash(){
    std::string blockHeaderHash = this->prevHash + this->merkleRootHash + std::to_string(this->nounce) + std::to_string(this->timestamp);
    return blockHeaderHash;
}