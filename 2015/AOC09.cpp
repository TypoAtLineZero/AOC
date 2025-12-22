#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <regex>
#include <vector>

int main(void) {
    //std::string filename="AOC09_input";
    std::ifstream file("AOC09_input");
    std::string line;
    
    if (!file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;   std::string line;
    }

    std::getline(std::cin, line);
    std::istringstream linestream{line};       

    while(std::getline(file, line)) {
        std::istringstream iss(line);
        std::cout << line << std::endl;
    }
    
    return 0;
}
