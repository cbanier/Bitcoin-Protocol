#include <assert.h>
#include <openssl/sha.h>
#include <iostream>

#include "Block.hpp"
#include "BlockHeader.hpp"
#include "common.hpp"

/* ********************************************************************** */
/*                               Block Test                               */
/* ********************************************************************** */

void testGetBlockChainSize() {
    // Create genesis block
    BlockHeader genesisHeader("genesis", "genesis", 0, 0.0f, "genesis");
    std::vector<Transaction> genesisTransactions;
    genesisTransactions.push_back(Transaction("trx"));
    Block genesis(genesisHeader, genesisTransactions, nullptr);

    // Create a chain with 3 blocks
    BlockHeader blockHeader("prevHash", "merkleRootHash", 123, 1.23f, "hash");
    std::vector<Transaction> transactions;
    transactions.push_back(Transaction("trx"));
    Block block1(blockHeader, transactions, &genesis);
    Block block2(blockHeader, transactions, &block1);
    Block block3(blockHeader, transactions, &block2);

    // Test getBlockChainSize
    assert(genesis.getBlockChainSize() == 1);
    assert(block1.getBlockChainSize() == 2);
    assert(block2.getBlockChainSize() == 3);
    assert(block3.getBlockChainSize() == 4);
}


/* ********************************************************************** */
/*                            BlockHeader Test                            */
/* ********************************************************************** */


void testGetBlockHeaderHash() {

    // Create a block header with known values
    std::string prevHash = "prevHash";
    std::string merkleRootHash = "merkleRootHash";
    int nounce = 123;
    float timestamp = 1.23f;
    std::string hash = "prevHashmerkleRootHash1231.23";

    // Create a block header object
    BlockHeader blockHeader(prevHash, merkleRootHash, nounce, timestamp, hash);

    // Calculate expected hash manually
    std::string expectedHash = prevHash + merkleRootHash + std::to_string(nounce) + std::to_string(timestamp);

    // Test getBlockHeaderHash
    assert(blockHeader.getBlockHeaderHash() == expectedHash);
}


int main(void) {
    
    testGetBlockChainSize();
    testGetBlockHeaderHash();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}