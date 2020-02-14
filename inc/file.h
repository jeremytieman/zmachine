#pragma once

#include <fstream>
#include <iterator>
#include <string>
#include <vector>

namespace machina::zmachine
{
    std::vector<char> readBinaryFile(const std::string& story_file_path)
    {
        std::ifstream input(story_file_path, std::ios::binary);
        std::vector<char> buffer((std::istreambuf_iterator<char>(input)), (std::istreambuf_iterator<char>()));
        return buffer;
    }
}