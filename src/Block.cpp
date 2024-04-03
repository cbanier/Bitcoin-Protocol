#include "Block.hpp"

Block::Block(BlockHeader blockHeader, std::vector<Transaction> transactions, Block* previousBlock) {
    this->blockHeader = blockHeader;
    this->transactions = transactions;
    this->previousBlock = previousBlock;
}

int Block::getBlockChainSize(void){
    
    int i = 1;
    Block* currentBlock = this->getPreviousBlock();
    while (currentBlock->getPreviousBlock() != nullptr) {
        i++;
        currentBlock = currentBlock->getPreviousBlock();
    }
    return i;
}