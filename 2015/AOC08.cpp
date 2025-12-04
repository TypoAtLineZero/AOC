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
    std::regex hexNum { R"([\\][x][0-9][0-9])" };
    std::regex hexNum2("([\\][x][0-9][0-9])");
    std::regex doubleBackslash { R"([\\][\\])" };
    std::regex doubleQuote { R"([\\][\"])" };
    std::smatch sm;
    std::smatch sm2;

    bool foundHexNum;
    bool foundDoubleBackslash;
    bool foundDoubleQuote;
    int counterHexNum;
    int counterDoubleBackslash;
    int counterDoubleQuote;

    while (std::getline(file, line)) {
        bool foundHexNum = false;
        bool foundDoubleBackslash = false;
        bool foundDoubleQuote = false;

        foundHexNum = std::regex_search(line, hexNum);
        std::regex_match(line, sm, hexNum);
        std::regex_match(line, sm2, hexNum2);
       
        foundDoubleBackslash = std::regex_search(line, doubleBackslash);
        foundDoubleQuote = std::regex_search(line, doubleQuote);
        
        std::cout << line << std::endl;
        std::cout << "Characters: " << line.length() << std::endl;

        if (foundHexNum) {
            std::cout << "found Hexnum" << std::endl;
            std::cout << "hexnum counter: " << sm.size() << std::endl;
            std::cout << "hexnum counter 2: " << sm2.position() << std::endl;
        }
        
        if (foundDoubleBackslash) {
            std::cout << "found double Backslash" << std::endl;
       }

        if (foundDoubleQuote) {
            std::cout << "found double Quote" << std::endl;
       }
         
        // starting and ending "
        // \\   - double backslash
        // \x$$ - some hexadecimal value
        // \"   - escaped "
        
        std::cout << " ============ " << std::endl;
    }

    return 0;
}
