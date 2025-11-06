#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

int main() {
	std::string filename="AOC3_input";
//
//	std::ifstream file(filename);
//    if (!file.is_open()) {
//			std::cerr << "Error opening the file." << std::endl;
//        return 1;
//    }
    
    std::vector<char> file_contents;
    std::ifstream file(filename);
    std::istreambuf_iterator<char> file_iterator(file);
    std::istreambuf_iterator<char> end_of_file;

    std::copy(file_iterator, end_of_file, std::back_inserter(file_contents));

    int arr[1000][1000] = {0};
	int i, j = 500;
	arr[i][j] = 1;
    
    for (const int& i : file_contents) {
        std::cout << "i: " << i << std::endl;

        if (line.compare("^") == 0) {
				++i;
				std::cout << "a" << std::endl;
		} else if (line.compare("v") == 0) {
				--i;
				std::cout << "b" << std::endl;
		} else if (line.compare(">") == 0) {
				++j;
				std::cout << "c" << std::endl;
		} else if (line.compare("<") == 0) {
				--j;
				std::cout << "d" << std::endl;
		} else {
				//std::cout << "Wrong character" << std::endl;
				std::cout << "Reached end" << std::endl;
		}

		arr[i][j] = 1;
	}

	int counter = 0;
    for (int ii = 0; ii < 500; ++ii) {
        for (int jj = 0; jj < 500; ++jj) {
		    if (arr[ii][jj] == 1) {
				++counter;
		    }
        }
    }
    
	std::cout << "fields: " << counter << std::endl;
	return 0;
}
