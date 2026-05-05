#include <docbase/cli.hpp>
#include <iostream>
#include <docbase/fileReader.hpp>

void printHelp() {
    std::cout << "incorrect Commands!" << std::endl << std::endl;
    std::cout << "Usage: docbase <commands> [options]" << std::endl;
    std::cout << "Commands: " << std::endl;
    std::cout << "help" << std::endl;
    std::cout << "read <filepath>" << std::endl;
}

int docbase::commands(int argc,char* argv[]) {
    if (argc < 2) {
        printHelp();
        return 0;
    }

    std::string command = argv[1];

    if (command == "help") {
        printHelp();
        return 0;
    }
    if (command == "read") {
        if (argc < 3){
            std::cerr << "Missing file path!" << std::endl;
            return 1;
        }
        try {
            const auto content = docbase::readFileAsString(argv[2]);
            std::cout << content << '\n';
            return 0;
        } catch (const std::exception& error) {
            std::cerr << "Error: " << error.what() << '\n';
            return 1;
        }
    }
    std::cerr << "Error: unknown command " << '\n';
    printHelp();
    return 1;
}
