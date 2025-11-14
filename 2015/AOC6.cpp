#include <iostream>
#include <fstream>
#include <sstream>
#include <regex>
#include <cassert>

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
    int coord[4];
    std::vector<std::string> numbers;
    
    while (getline(file, line)) {
        int i = 0;
        
        std::string currentNumber;
        for (char c : line) {
            if (isdigit(c)) {
                currentNumber += c;
            } else {
                if (!currentNumber.empty()) {
                    numbers.push_back(currentNumber);
                    coord[i] = std::stoi(currentNumber);
                    currentNumber = "";
                    ++i;
                }
            }
        }
        if (!currentNumber.empty()) {
            numbers.push_back(currentNumber);
            coord[i] = std::stoi(currentNumber);
        }

//        for(const std::string& i : numbers) {
//            std::cout << "i = " << i << std::endl;
//        }
//
//        for (int j=0; j<4; ++j) {
//            std::cout << "coords = " << coord[j] << std::endl;
//        }
//
        int xStart = coord[0];
        int yStart = coord[1];
        int xEnd = coord[2];
        int yEnd = coord[3];

        if (line.find("on") != std::string::npos) {
            for (int i = xStart; i <= xEnd; ++i) {
                for (int j = yStart; j <= yEnd ; ++j) {
                    grid[i][j] = true;
                }
            }
        }
        
        if (line.find("off") != std::string::npos) {
            for (int i = xStart; i <= xEnd; ++i) {
                for (int j = yStart; j <= yEnd ; ++j) {
                    grid[i][j] = false;
                }
            }
        }

        if (line.find("toggle") != std::string::npos) {
            for (int i = xStart; i <= xEnd; ++i) {
                for (int j = yStart; j <= yEnd ; ++j) {
                    grid[i][j] = !grid[i][j];
                }
            }
        }
    }

    file.close();
    
    int counter = 0;
    for (int ii = 0; ii < 1000; ++ii ) {
        for (int jj = 0; jj < 1000; ++jj) {
            if (grid[ii][jj] == true) {
                ++counter;
            }
        }
    }

    std::cout << "Counter: " << counter << std::endl;
    return 0;
}

