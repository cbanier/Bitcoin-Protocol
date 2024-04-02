#pragma once

#include <string>
#include <vector>

struct Node {
    std::string hash;
    Node* left;
    Node* right;

    Node(const std::string& value);
};

class MerkleTree {
   private:
    Node* merkleTreeRoot;

   public:
    MerkleTree(std::vector<std::string>& leafValues);
    inline ~MerkleTree() { auxMerkleTreeDesallocator(merkleTreeRoot); }

    inline Node* getMerkleTreeRoot(void) { return merkleTreeRoot; }
    inline void displayMerkleTree(void) { auxDisplayMerkleTree(merkleTreeRoot, 0); }

   private:
    Node* buildMerkleTree(const std::vector<std::string>& leafValues);
    void auxMerkleTreeDesallocator(Node* root);

    void auxDisplayMerkleTree(Node* root, int level);
};