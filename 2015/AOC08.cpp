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

    long total_paper = 0; // Wrapping paper
    long total_ribbon = 0; // Ribbon
    std::string line;

    while (std::getline(file, line)) {
        std::cout << line << std::endl;
        std::cout << "Characters: " << line.length() << std::endl;

        // cases for finding characters
        // starting and ending "
        // \\   - double backslash
        // \x$$ - some hexadecimal value
        // \"   - escaped "
    }

    return 0;
}
