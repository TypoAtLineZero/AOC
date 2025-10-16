#include <iostream>
#include <fstream>

int main() {
	std::string filename="AOC2_input";

	std::ifstream file(filename);
    if (!file.is_open()) {
			std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    int arr[4][2] = {
        { 10, 11 },
        { 20, 21 },
        { 30, 31 },
        { 40, 41 }
    };

    int i, j;

	std::cout << "Printing a 2D Array:\n";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
				std::cout << "\t" << arr[i][j];
        }
		std::cout << std::endl;
    }
    
    return 0;
}
