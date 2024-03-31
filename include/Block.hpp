#pragma once

#include <string>

class Block
{
    private:
        std::string prevHash;
        std::string rootHash;
        int nounce;
        float timestamp;
    
    public:
        Block(std::string prevHash, 
              std::string rootHash,
              int nounce, 
              float timestamp);
};