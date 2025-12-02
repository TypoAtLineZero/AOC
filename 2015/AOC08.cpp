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

    std::regex specialChars { R"([\\])" };
    //std::regex specialChars { R"([-[\]{}()*+?.,\^$|#\s])" };

    while (std::getline(file, line)) {
        bool found1 = std::regex_search(line, specialChars);
        std::cout << line << std::endl;
        std::cout << "Characters: " << line.length() << std::endl;

        if (found1) {
            std::cout << "found 1: " << std::endl;
        }

        // starting and ending "
        // \\   - double backslash
        // \x$$ - some hexadecimal value
        // \"   - escaped "
        std::cout << " ============ " << std::endl;
    }

    return 0;
}
