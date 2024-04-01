#pragma once

#include <string>
#include <vector>

struct Node {
    std::string value;
    std::vector<unsigned char> hash;
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

    inline std::vector<unsigned char> getMerkleTreeRootHashed(void) {
        return merkleTreeRoot->hash;
    }  // Keep the both or not !
    /*
    inline std::string getMerkleTreeRootHashed(void) {
        std::string hashString(merkleTreeRoot->hash.begin(), merkleTreeRoot->hash.end());
        return hashString;
    } */
    inline void displayMerkleTree(void) { auxDisplayMerkleTree(merkleTreeRoot, 0); }

   private:
    Node* buildMerkleTree(const std::vector<std::string>& leafValues);
    void auxMerkleTreeDesallocator(Node* root);

    void auxDisplayMerkleTree(Node* root, int level);
};