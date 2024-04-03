#include "Block.hpp"
#include "BlockHeader.hpp"
#include "utils.hpp"

#include <iostream>
#include <iomanip>
#include <sstream>



int main(int argc, char* argv[]) {
    std::cout << sha256("Terminal Root") << '\n';
    return 0;

}
