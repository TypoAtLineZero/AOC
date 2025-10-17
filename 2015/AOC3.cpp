#include <iostream>
#include <fstream>

int main() {
	std::string filename="AOC3_input";

	std::ifstream file(filename);
    if (!file.is_open()) {
			std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    int arr[1000][1000] = {0};
    arr[500][500] = 1;
	std::string line;

	while (getline(file, line)) {
			std::cout << line << std::endl;

		    int i, j = 500;
		    arr[i][j] = 1;
			
			if (line.compare("^") == 0) {
					++i;
			} else if (line.compare("v") == 0) {
					--i;
			} else if (line.compare(">") == 0) {
					++j;
			} else if (line.compare("<") == 0) {
					--j;
			} else {
					std::cout << "Wrong character" << std::endl;
		    }
	}


	//std::cout << "Printing a 2D Array:\n";
    //for (i = 0; i < 4; i++) {
    //    for (j = 0; j < 2; j++) {
	//			std::cout << "\t" << arr[i][j];
    //    }
	//	std::cout << std::endl;
    //}
    
    return 0;
}
