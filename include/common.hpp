#pragma once

#include <string>
#include <vector>

std::vector<unsigned char> sha256(const std::string& str);

const std::vector<std::string> _reformatLeafValues(std::vector<std::string>& leafValues);