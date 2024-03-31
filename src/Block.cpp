#include "Block.hpp"


Block::Block(std::string prevHash, 
             std::string rootHash,
             int nounce, 
             float timestamp)
{
    this->prevHash = prevHash;
    this->rootHash = rootHash;
    this->nounce = nounce;
    this->timestamp = timestamp;
}
