#pragma once

#include <string>
#include <vector>
#include "TransactionIn.hpp"
#include "TransactionOut.hpp"


class Transaction {

    private:
        std::vector<TransactionIn*> TransactionIns;
        std::vector<TransactionOut*> TransactionOuts;

    public:
        Transaction(std::vector<TransactionIn*> TransactionIns,std::vector<TransactionOut*> TransactionOuts);
};