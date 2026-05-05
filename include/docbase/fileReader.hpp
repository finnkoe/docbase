#pragma once

#include <filesystem>
#include <string>

namespace docbase {

    std::string readFileAsString(
        const std::filesystem::path& path
    );
}