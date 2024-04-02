cmake_minimum_required(VERSION 3.10)

project(Bitcoin-Protocol)
include(CTest)
enable_testing()

# Find OpenSSL package
find_package(OpenSSL REQUIRED)
include_directories(${OPENSSL_INCLUDE_DIR})

# Set cmake options
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_VERBOSE_MAKEFILE OFF)

# Set paths
set(src_path "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(include_path "${CMAKE_CURRENT_SOURCE_DIR}/include")

# Include directories
include_directories(${src_path})
include_directories(${include_path})

# Create library
add_library(bitcoin_proto
    ${src_path}/common.cpp
    ${src_path}/MerkleTree.cpp
)

target_link_libraries(bitcoin_proto m ${OPENSSL_LIBRARIES})

add_subdirectory(tests)