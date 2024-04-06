#pragma once

#include <string>


class TransactionOut {

    private:
        std::string receiverWalletAddress;
        int amount; 

    public:
        TransactionOut(std::string receiverWalletAddress, int amount);
};