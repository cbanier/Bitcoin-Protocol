add_executable(test-block test_BlockHeader.cpp)
target_include_directories(test-block 
    PRIVATE 
        ${src_path} 
        ${include_path}
)
target_link_libraries(test-block 
    PRIVATE 
        bitcoin_proto
)
add_test(NAME test-block COMMAND test-block)