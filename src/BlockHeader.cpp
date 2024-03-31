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
std::string BlockHeader::getPrevHash() const { return prevHash; }
std::string BlockHeader::getMerkleRootHash() const { return merkleRootHash; }
int BlockHeader::getNounce() const { return nounce; }
float BlockHeader::getTimestamp() const { return timestamp; }
std::string BlockHeader::getHash() const { return Hash; }

// Setters
void BlockHeader::setPrevHash(const std::string& prevHash) { this->prevHash = prevHash; }
void BlockHeader::setMerkleRootHash(const std::string& merkleRootHash) {
    this->merkleRootHash = merkleRootHash;
}
void BlockHeader::setNounce(int nounce) { this->nounce = nounce; }
void BlockHeader::setTimestamp(float timestamp) { this->timestamp = timestamp; }
void BlockHeader::setHash(const std::string& Hash) { this->Hash = Hash; }