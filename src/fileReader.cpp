#include "docbase/fileReader.hpp"
#include <iostream>
#include <fstream>

std::string docbase::readFileAsString(
    const std::filesystem::path& path
    ) {
    std::fstream file (path);
    if (!file) {
        throw std::runtime_error("Could not open file");
    }

    std::string line;
    std::stringstream ss;
    while (getline(file,line)) {
        ss << line << std::endl;
    }
    return ss.str();
}