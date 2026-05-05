#include "docbase/fileReader.hpp"
#include <iostream>

std::string docbase::readFileAsString(
    const std::filesystem::path& path
    ) {
    std::fstream file (path);
    if (!file) {
        std::cerr << "Datei wurde nicht gefunden!" << std::endl;
        return "Datei nicht gefunden!";
    }

    std::string line;
    while (getline(file,line)) {
        std::cout << line << std:: endl;
    }
    return "Datei gelesen!";
}