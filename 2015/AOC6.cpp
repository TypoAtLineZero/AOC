#include <iostream>
#include <fstream>
#include <sstream>
#include <regex>

int main() {
    std::string filename="AOC6_input";
    std::ifstream file(filename);
   
    if (!file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::string line;
    std::string part;
    
    bool grid[1000][1000] = {false};
    
    while (getline(file, line)) {
        // Split each dimension by 'x'
        //while (getline(ss, part, 'x')) {
        std::string coord1 = std::regex_replace(line, std::regex("[^0-9]*([0-9]+).*"), std::string("$1"));
        std::string coord2 = std::regex_replace(line, std::regex("[^0-9]*([0-9]+).*"), std::string("$2"));
        std::string coord3 = std::regex_replace(line, std::regex("[^0-9]*([0-9]+).*"), std::string("$3"));
        std::string coord4 = std::regex_replace(line, std::regex("[^0-9]*([0-9]+).*"), std::string("$4"));

        if (line.find("on") != std::string::npos) {
        }
        
        if (line.find("off") != std::string::npos) {
        }

        if (line.find("toggle") != std::string::npos) {
        }
    }

    file.close();

    return 0;
}

