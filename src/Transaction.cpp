#include "Transaction.hpp"


Transaction::Transaction(std::vector<TransactionIn*> TransactionIns,std::vector<TransactionOut*> TransactionOuts){
    this->TransactionIns = TransactionIns;
    this->TransactionOuts = TransactionOuts;
}

