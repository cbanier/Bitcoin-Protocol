#pragma once

#include <string>

class BlockHeader {
   private:
    std::string prevHash;
    std::string merkleRootHash;
    int nounce;
    float timestamp;
    std::string Hash;

   public:
    BlockHeader(std::string prevHash, std::string merkleRootHash, int nounce, float timestamp,
                std::string Hash);
};