add_executable(test-merkle-tree test_MerkleTree.cpp)
target_include_directories(test-merkle-tree 
    PRIVATE 
        ${src_path} 
        ${include_path}
)
target_link_libraries(test-merkle-tree 
    PRIVATE 
        bitcoin_proto
)
add_test(NAME test-merkle-tree COMMAND test-merkle-tree)