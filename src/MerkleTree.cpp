#include <openssl/sha.h>
#include <iostream>

#include "MerkleTree.hpp"
#include "common.hpp"

/* ********************************************************************** */
/*                                  Node                                  */
/* ********************************************************************** */

Node::Node(const std::string& value) {
    this->hash = sha256(value);
    this->left = nullptr;
    this->right = nullptr;
}

/* ********************************************************************** */
/*                           MerkleTree - Public                          */
/* ********************************************************************** */

MerkleTree::MerkleTree(std::vector<std::string>& leafValues) {
    merkleTreeRoot = buildMerkleTree(_reformatLeafValues(leafValues));
}

/* ********************************************************************** */
/*                          MerkleTree - Private                          */
/* ********************************************************************** */

Node* MerkleTree::buildMerkleTree(const std::vector<std::string>& leafValues) {
    if (leafValues.empty()) return nullptr;

    std::vector<Node*> leafNodes;
    for (const auto& leafValue : leafValues) leafNodes.push_back(new Node(leafValue));

    std::vector<Node*> parents = leafNodes;
    while (parents.size() > 1) {
        std::vector<Node*> newParents;
        for (size_t i = 0; i < parents.size(); i += 2) {
            Node* parent = new Node(parents[i]->hash + parents[i + 1]->hash);
            parent->left = parents[i];
            parent->right = parents[i + 1];
            newParents.push_back(parent);
        }
        parents = newParents;
    }

    return parents.front();
}

/* ********************************************************************** */

void MerkleTree::auxMerkleTreeDesallocator(Node* root) {
    if (root == nullptr) return;

    auxMerkleTreeDesallocator(root->left);
    auxMerkleTreeDesallocator(root->right);
    delete root;
}

/* ********************************************************************** */

void MerkleTree::auxDisplayMerkleTree(Node* root, int level) {
    if (root == nullptr) return;

    auxDisplayMerkleTree(root->right, level + 1);
    for (int i = 0; i < level; i++) {
        std::cout << "\t";
    }
    std::cout << root->hash << std::endl;
    auxDisplayMerkleTree(root->left, level + 1);
}