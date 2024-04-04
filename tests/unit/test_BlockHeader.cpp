#include <assert.h>
#include <openssl/sha.h>
#include <iostream>

#include "BlockHeader.hpp"
#include "common.hpp"


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
    
    testGetBlockHeaderHash();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}