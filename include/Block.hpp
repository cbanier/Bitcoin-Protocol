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
    // Constructor
    Block(BlockHeader blockHeader, std::vector<Transaction> transactions, Block* previousBlock);

    // Getters
    inline BlockHeader getBlockHeader() const { return blockHeader; }
    inline std::vector<Transaction> getTransactions() const { return transactions; }
    inline Block* getPreviousBlock() const { return previousBlock; }

    // Setters
    inline void setBlockHeader(const BlockHeader& blockHeader) { this->blockHeader = blockHeader; }
    inline void setTransactions(const std::vector<Transaction>& transactions) { this->transactions = transactions; }
    inline void setPreviousBlock(Block* previousBlock) { this->previousBlock = previousBlock; }
};
