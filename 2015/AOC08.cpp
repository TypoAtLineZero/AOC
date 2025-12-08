#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>
#include <regex>
#include <vector>

int main(void) {
    std::string filename="AOC08_input";

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::string line;
    std::regex hexNum { R"([\\][x][0-9][0-9])" };
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
    int counterOverall = 0;
    int counterOverallPlus = 0;
    int counterOverallMinus = 0;
    std::vector<int> overallPlus;
    std::vector<int> overallMinus;

    while (std::getline(file, line)) {
        counterOverallPlus = 0;
        counterOverallMinus = 0;
        bool foundHexNum = false;
        bool foundDoubleBackslash = false;
        bool foundDoubleQuote = false;
        
        foundHexNum = std::regex_search(line, hexNum);
        std::regex_match(line, sm, hexNum);

        std::ptrdiff_t const matchCountHexNum(std::distance(std::sregex_iterator(line.begin(), line.end(), hexNum), std::sregex_iterator()));
        std::ptrdiff_t const matchCountBackslash(std::distance(std::sregex_iterator(line.begin(), line.end(), doubleBackslash), std::sregex_iterator()));
        std::ptrdiff_t const matchCountDoubleQuote(std::distance(std::sregex_iterator(line.begin(), line.end(), doubleQuote), std::sregex_iterator()));
       
        foundDoubleBackslash = std::regex_search(line, doubleBackslash);
        foundDoubleQuote = std::regex_search(line, doubleQuote);
        
        std::cout << line << std::endl;
        //std::cout << "Characters: " << line.length() << std::endl;
        
       /* 
        if (foundHexNum) {
            std::cout << "found Hexnum" << std::endl;
            std::cout << matchCountHexNum << std::endl;
        }
        
        if (foundDoubleBackslash) {
            std::cout << "found double Backslash" << std::endl;
            std::cout << matchCountBackslash << std::endl;
       }

        if (foundDoubleQuote) {
            std::cout << "found double Quote" << std::endl;
            std::cout << matchCountDoubleQuote << std::endl;
       }
       */ 
        // starting and ending "
        // \\   - double backslash
        // \x$$ - some hexadecimal value
        // \"   - escaped "
        
        counterOverallPlus += line.length();
        counterOverallMinus += line.length() - 2 - (matchCountHexNum * 3) - (matchCountBackslash) - (matchCountDoubleQuote);
        std::cout << " counterPlus: " << counterOverallPlus << std::endl;
        std::cout << " counterMinus: " << counterOverallMinus << std::endl;

        overallPlus.push_back(counterOverallPlus);
        overallMinus.push_back(counterOverallMinus);

        std::cout << " ============ " << std::endl;
    }

    int sumPlus = 0;
    int sumMinus = 0;
    
    for (int i : overallPlus) {
        sumPlus += i;
    }

    for (int ii : overallMinus) {
        sumMinus += ii;
    }

    std::cout << sumPlus << std::endl;
    std::cout << sumMinus << std::endl;

    counterOverall = counterOverallPlus - counterOverallMinus;
    std::cout << "Current counter: " << counterOverall << std::endl;
    return 0;
}
