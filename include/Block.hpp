#pragma once

#include <string>
#include <vector>
#include "BlockHeader.hpp"

/*temporary*/
class Transaction {};

class Block {
   private:
    BlockHeader blockHeader;
    std::vector<Transaction> transactions;
    Block* previousBlock;

   public:
    Block(BlockHeader blockHeader, std::vector<Transaction> transactions, Block* previousBlock);
};
