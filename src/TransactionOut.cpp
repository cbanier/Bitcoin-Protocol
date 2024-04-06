#include "TransactionOut.hpp"


TransactionOut::TransactionOut(std::string receiverWalletAddress, int amount){
    this->receiverWalletAddress = receiverWalletAddress;
    this->amount = amount;
}