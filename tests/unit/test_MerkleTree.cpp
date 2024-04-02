#include <assert.h>
#include <openssl/sha.h>
#include <iostream>

#include "MerkleTree.hpp"
#include "common.hpp"

/* ********************************************************************** */
/*                             Auxiliary Test                             */
/* ********************************************************************** */

void testNodeHashValue(void) {
    Node node = Node("A");

    std::string expectedHash = "559aead08264d5795d3909718cdd05abd49572e84fe55590eef31a88a08fdffd";
    assert(node.hash == expectedHash);
}

/* ********************************************************************** */

void testLeafVectorIsPowerOf2(void) {
    std::vector<std::string> leaves = {"A", "B", "C"};
    assert(_reformatLeafValues(leaves).size() == 4);  // 1 empty string added

    leaves = {"A", "B", "C", "D", "E"};
    assert(_reformatLeafValues(leaves).size() == 8);  // 3 empty strings added

    leaves = {"A", "B", "C", "D", "E", "F", "G", "H"};
    assert(_reformatLeafValues(leaves).size() == 8);  // no empty string added

    leaves.push_back("");
    assert(_reformatLeafValues(leaves).size() == 16);  // 7 empty strings added
}

/* ********************************************************************** */
/*                            Merkle Tree Test                            */
/* ********************************************************************** */

void testMerkleTreeTwoNodes(void) {
    std::vector<std::string> leaf{"A", "B"};
    MerkleTree mTree = MerkleTree(leaf);

    Node *mTreeRoot = mTree.getMerkleTreeRoot();

    std::string AExpectedHash = "559aead08264d5795d3909718cdd05abd49572e84fe55590eef31a88a08fdffd";
    assert(mTreeRoot->left->hash == AExpectedHash);

    std::string BExpectedHash = "df7e70e5021544f4834bbee64a9e3789febc4be81470df629cad6ddb03320a5c";
    assert(mTreeRoot->right->hash == BExpectedHash);

    std::string RootExpectedHashed = sha256(AExpectedHash + BExpectedHash);
    assert(mTreeRoot->hash == RootExpectedHashed);
}

/* ********************************************************************** */

void testMerkleTreeThreeNodes(void) {
    std::vector<std::string> leaf{"A", "B", "C"};
    MerkleTree mTree = MerkleTree(leaf);

    Node *mTreeRoot = mTree.getMerkleTreeRoot();

    std::string AExpectedHash = "559aead08264d5795d3909718cdd05abd49572e84fe55590eef31a88a08fdffd";
    std::string BExpectedHash = "df7e70e5021544f4834bbee64a9e3789febc4be81470df629cad6ddb03320a5c";
    std::string CExpectedHash = "6b23c0d5f35d1b11f9b683f0b0a617355deb11277d91ae091d399c655b87940d";

    assert(mTreeRoot->left->left->hash == AExpectedHash);
    assert(mTreeRoot->left->right->hash == BExpectedHash);
    assert(mTreeRoot->right->left->hash == CExpectedHash);
    assert(mTreeRoot->right->right->hash == CExpectedHash);

    assert(mTreeRoot->left->hash == sha256(AExpectedHash + BExpectedHash));
    assert(mTreeRoot->right->hash == sha256(CExpectedHash + CExpectedHash));

    assert(mTreeRoot->hash ==
           sha256(sha256(AExpectedHash + BExpectedHash) + sha256(CExpectedHash + CExpectedHash)));
}

/* ********************************************************************** */

void testMerkleTreeFiveNodes(void) {
    std::vector<std::string> leaf{"Alpha", "Beta", "Gamma", "Delta", "Epsilon"};
    MerkleTree mTree = MerkleTree(leaf);

    Node *mTreeRoot = mTree.getMerkleTreeRoot();

    std::string AlphaExpectedHash =
        "b1a96dd646bccaa24cef7a3db22a6f995f05658f4f1c3272913e258c03e6fb24";
    std::string BetaExpectedHash =
        "703390318bd55aef50b7823d2b90a846debff99e6e3d401a24a921b733912a6d";
    std::string GammaExpectedHash =
        "a8ab3d5805c9214bc66b794f599cbccd5a5958dc5a6a322ee81e3a68344c6db7";
    std::string DeltaExpectedHash =
        "18833da39fb9b7f8c917fe0220daf9cf12e6524df8fb16e39f04dbe827e2d200";
    std::string EpsilonExpectedHash =
        "b1e645a8c213eadadd4e55b66c5c4270b4935e671c4d3129cb1a3ef385db0024";

    assert(mTreeRoot->left->left->left->hash == AlphaExpectedHash);
    assert(mTreeRoot->left->left->right->hash == BetaExpectedHash);
    assert(mTreeRoot->left->right->left->hash == GammaExpectedHash);
    assert(mTreeRoot->left->right->right->hash == DeltaExpectedHash);
    assert(mTreeRoot->right->left->left->hash == EpsilonExpectedHash);
    assert(mTreeRoot->right->left->right->hash == EpsilonExpectedHash);
    assert(mTreeRoot->right->right->left->hash == EpsilonExpectedHash);
    assert(mTreeRoot->right->right->right->hash == EpsilonExpectedHash);

    assert(mTreeRoot->left->left->hash == sha256(AlphaExpectedHash + BetaExpectedHash));
    assert(mTreeRoot->left->right->hash == sha256(GammaExpectedHash + DeltaExpectedHash));
    assert(mTreeRoot->right->left->hash == sha256(EpsilonExpectedHash + EpsilonExpectedHash));
    assert(mTreeRoot->right->right->hash == sha256(EpsilonExpectedHash + EpsilonExpectedHash));

    assert(mTreeRoot->left->hash == sha256(sha256(AlphaExpectedHash + BetaExpectedHash) +
                                           sha256(GammaExpectedHash + DeltaExpectedHash)));
    assert(mTreeRoot->right->hash == sha256(sha256(EpsilonExpectedHash + EpsilonExpectedHash) +
                                            sha256(EpsilonExpectedHash + EpsilonExpectedHash)));

    assert(mTreeRoot->hash == sha256(sha256(sha256(AlphaExpectedHash + BetaExpectedHash) +
                                            sha256(GammaExpectedHash + DeltaExpectedHash)) +
                                     sha256(sha256(EpsilonExpectedHash + EpsilonExpectedHash) +
                                            sha256(EpsilonExpectedHash + EpsilonExpectedHash))));
}

/* ********************************************************************** */
/*                                  Main                                  */
/* ********************************************************************** */

int main(void) {
    testNodeHashValue();

    testLeafVectorIsPowerOf2();

    testMerkleTreeTwoNodes();
    testMerkleTreeThreeNodes();
    testMerkleTreeFiveNodes();

    std::cout << "All tests passed!" << std::endl;
    return 0;
}