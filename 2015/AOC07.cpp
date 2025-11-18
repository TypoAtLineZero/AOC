#include <iostream>
#include <fstream>
#include <sstream>
#include <regex>
#include <cassert>

int main() {
    std::string filename="AOC07_input";
    std::ifstream file(filename);
   
    if (!file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::string line;
    std::string part;
    
    bool grid[1000][1000] = {false};
    int gridp2[1000][1000] = {0};
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

        int xStart = coord[0];
        int yStart = coord[1];
        int xEnd = coord[2];
        int yEnd = coord[3];

        if (line.find("on") != std::string::npos) {
            for (int i = xStart; i <= xEnd; ++i) {
                for (int j = yStart; j <= yEnd ; ++j) {
                    grid[i][j] = true;
                    gridp2[i][j] += 1;
                }
            }
        }
        
        if (line.find("off") != std::string::npos) {
            for (int i = xStart; i <= xEnd; ++i) {
                for (int j = yStart; j <= yEnd ; ++j) {
                    grid[i][j] = false;
                    if (gridp2[i][j] > 0) {
                        gridp2[i][j] -= 1;
                    }
                }
            }
        }

        if (line.find("toggle") != std::string::npos) {
            for (int i = xStart; i <= xEnd; ++i) {
                for (int j = yStart; j <= yEnd ; ++j) {
                    grid[i][j] = !grid[i][j];
                    gridp2[i][j] += 2;
                }
            }
        }
    }

    file.close();
    
    int counter = 0;
    int counterp2 = 0;
    
    // Part 1 loop
    for (int ii = 0; ii < 1000; ++ii ) {
        for (int jj = 0; jj < 1000; ++jj) {
            if (grid[ii][jj] == true) {
                ++counter;
            }
        }
    }

    // Part 2 loop
    for (int ii = 0; ii < 1000; ++ii ) {
        for (int jj = 0; jj < 1000; ++jj) {
            counterp2 += gridp2[ii][jj];
        }
    }

    std::cout << "Counter: " << counter << std::endl;
    std::cout << "Counter 2: " << counterp2 << std::endl;
    return 0;
}

