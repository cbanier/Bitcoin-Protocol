#include "BlockHeader.hpp"

BlockHeader::BlockHeader(std::string prevHash, std::string merkleRootHash, int nounce,
                         float timestamp, std::string Hash) {
    this->prevHash = prevHash;
    this->merkleRootHash = merkleRootHash;
    this->nounce = nounce;
    this->timestamp = timestamp;
    this->Hash = Hash;
}

// Getters
std::string BlockHeader::getPrevHash() { return prevHash; }
std::string BlockHeader::getMerkleRootHash() { return merkleRootHash; }
int BlockHeader::getNounce() { return nounce; }
float BlockHeader::getTimestamp() { return timestamp; }
std::string BlockHeader::getHash() { return Hash; }

// Setters
void BlockHeader::setPrevHash(std::string& prevHash) { this->prevHash = prevHash; }
void BlockHeader::setMerkleRootHash(std::string& merkleRootHash) {
    this->merkleRootHash = merkleRootHash;
}
void BlockHeader::setNounce(int nounce) { this->nounce = nounce; }
void BlockHeader::setTimestamp(float timestamp) { this->timestamp = timestamp; }
void BlockHeader::setHash(std::string& Hash) { this->Hash = Hash; }