#include "docbase/fileReader.hpp"

int main() {
    std::filesystem::path path = "";
    auto content = docbase::readFileAsString("/home/finn/git_projects/docbase/tests/sample.txt");
    return 0;
}