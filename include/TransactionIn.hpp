#pragma once

#include <string>


class TransactionIn {

    private:
        std::string prevTransactionHash;
        int prevTransactionIndex;

    public:
        TransactionIn(std::string prevTransactionHash, int prevTransactionIndex);
};