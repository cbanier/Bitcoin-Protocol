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

    // Getters
    BlockHeader getBlockHeader();
    std::vector<Transaction> getTransactions();
    Block* getPreviousBlock();

    // Setters
    void setBlockHeader(const BlockHeader& blockHeader);
    void setTransactions(const std::vector<Transaction>& transactions);
    void setPreviousBlock(Block* previousBlock);
};
