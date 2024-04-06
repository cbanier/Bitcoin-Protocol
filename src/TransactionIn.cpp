#include "TransactionIn.hpp"


TransactionIn::TransactionIn(std::string prevTransactionHash, int prevTransactionIndex){
    this->prevTransactionHash = prevTransactionHash;
    this->prevTransactionIndex = prevTransactionIndex;
}