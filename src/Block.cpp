#include "Block.hpp"

Block::Block(BlockHeader blockHeader, std::vector<Transaction> transactions, Block* previousBlock) {
    this->blockHeader = blockHeader;
    this->transactions = transactions;
    this->previousBlock = previousBlock;
}

// Getters
BlockHeader Block::getBlockHeader() const { return blockHeader; }
std::vector<Transaction> Block::getTransactions() const { return transactions; }
Block* Block::getPreviousBlock() const { return previousBlock; }

// Setters
void Block::setBlockHeader(const BlockHeader& blockHeader) { this->blockHeader = blockHeader; }
void Block::setTransactions(const std::vector<Transaction>& transactions) {
    this->transactions = transactions;
}
void Block::setPreviousBlock(Block* previousBlock) { this->previousBlock = previousBlock; }
