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
    BlockHeader() {}
    BlockHeader(std::string prevHash, std::string merkleRootHash, int nounce, float timestamp,
                std::string hash);

    // Getters
    std::string getPrevHash();
    std::string getMerkleRootHash();
    int getNounce();
    float getTimestamp();
    std::string getHash();

    // Setters
    void setPrevHash(std::string& prevHash);
    void setMerkleRootHash(std::string& merkleRootHash);
    void setNounce(int nounce);
    void setTimestamp(float timestamp);
    void setHash(std::string& hash);
};
