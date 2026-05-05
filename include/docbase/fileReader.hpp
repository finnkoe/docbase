#pragma once

#include <filesystem>
#include <string>
#include <fstream>

namespace docbase {

    std::string readFileAsString(
        const std::filesystem::path& path
    );
}