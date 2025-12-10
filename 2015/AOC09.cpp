#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>
#include <regex>
#include <vector>

int main(void) {
    std::string filename="AOC09_input";

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    return 0;
}
