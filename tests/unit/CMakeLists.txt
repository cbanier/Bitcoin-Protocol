# Define a function to create test executables
function(create_test_executable TARGET_NAME SOURCE_FILE)
    add_executable(${TARGET_NAME} ${SOURCE_FILE})
    target_include_directories(${TARGET_NAME} PRIVATE ${src_path} ${include_path})
    target_link_libraries(${TARGET_NAME} PRIVATE bitcoin_proto)
    add_test(NAME ${TARGET_NAME} COMMAND ${TARGET_NAME})
endfunction()

# Create test executables using the function
create_test_executable(test-block test_Block.cpp)
create_test_executable(test-block-header test_BlockHeader.cpp)
create_test_executable(test-merkle-tree test_MerkleTree.cpp)
