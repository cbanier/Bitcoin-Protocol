#include "Block.hpp"

Block::Block(BlockHeader blockHeader, std::vector<Transaction> transactions, Block* previousBlock) {
    this->blockHeader = blockHeader;
    this->transactions = transactions;
    this->previousBlock = previousBlock;
}

// Getters
BlockHeader Block::getBlockHeader() { return blockHeader; }
std::vector<Transaction> Block::getTransactions() { return transactions; }
Block* Block::getPreviousBlock() { return previousBlock; }

// Setters
void Block::setBlockHeader(BlockHeader& blockHeader) { this->blockHeader = blockHeader; }
void Block::setTransactions(std::vector<Transaction>& transactions) {
    this->transactions = transactions;
}
void Block::setPreviousBlock(Block* previousBlock) { this->previousBlock = previousBlock; }
