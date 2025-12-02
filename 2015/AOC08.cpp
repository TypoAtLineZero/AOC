#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>
#include <regex>

int main(void) {
    std::string filename="AOC08_short";

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::string line;
    std::string backslash = "\\";
    std::string highcomma = "\"";
    std::size_t found;

    while (std::getline(file, line)) {
        std::cout << line << std::endl;
        std::cout << "Characters: " << line.length() << std::endl;

        found = line.find(backslash);
        if (found != std::string::npos) {
            std::cout << "found 1: " << std::endl;
        }

        found = line.find(highcomma);
        if (found != std::string::npos) {
            std::cout << "found 2: " << std::endl;
        }

        // cases for finding characters
        // starting and ending "
        // \\   - double backslash
        // \x$$ - some hexadecimal value
        // \"   - escaped "
    }

    return 0;
}
