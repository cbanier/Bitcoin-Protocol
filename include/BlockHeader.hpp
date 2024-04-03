#pragma once

#include <string>


class BlockHeader {
private:
    std::string prevHash;
    std::string merkleRootHash;
    int nounce;
    float timestamp;
    std::string hash;

public:
    // Constructors
    BlockHeader() {}
    BlockHeader(std::string prevHash, std::string merkleRootHash, int nounce, float timestamp,
                std::string hash);

    // Getters
    inline std::string getPrevHash() const { return prevHash; }
    inline std::string getMerkleRootHash() const { return merkleRootHash; }
    inline int getNounce() const { return nounce; }
    inline float getTimestamp() const { return timestamp; }
    inline std::string getHash() const { return hash; }

    // Setters
    inline void setPrevHash(const std::string& prevHash) { this->prevHash = prevHash; }
    inline void setMerkleRootHash(const std::string& merkleRootHash) { this->merkleRootHash = merkleRootHash; }
    inline void setNounce(int nounce) { this->nounce = nounce; }
    inline void setTimestamp(float timestamp) { this->timestamp = timestamp; }
    inline void setHash(const std::string& hash) { this->hash = hash; }

    // Hash
    std::string getBlockHeaderHash(void);
};