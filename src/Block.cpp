#include "Block.hpp"

Block::Block(BlockHeader blockHeader, std::vector<Transaction> transactions, Block* previousBlock) {
    this->blockHeader = blockHeader;
    this->transactions = transactions;
    this->previousBlock = previousBlock;
}
