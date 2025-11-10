#include <iostream>
#include <fstream>
#include <sstream>
#include <regex>

int main() {
    std::string filename="AOC5_input";
    std::ifstream file(filename);
   
    if (!file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::string line;
    int vowels;
    int happy = 0;

    while (getline(file, line)) {
        vowels = 0;
        for (int i = 0; line[i]!='\0'; ++i) {
            if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') {
                ++vowels;
                std::cout << "line: " << line << std::endl;
                std::cout << "vowels: " << vowels << std::endl;
            }
        }
    }
    
    return 0;
}
