#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

int main() {
	std::string filename="AOC3_input";
    
    std::vector<char> file_contents;
    std::ifstream file(filename);
    std::istreambuf_iterator<char> file_iterator(file);
    std::istreambuf_iterator<char> end_of_file;

    std::copy(file_iterator, end_of_file, std::back_inserter(file_contents));

    int arr[1000][1000] = {0};
	int i = 500;
    int j = 500;
    std::cout << i  << j << std::endl;
	arr[i][j] = 1;
    
    for (const int& ii : file_contents) {
        //std::cout << "ii: " << ii << std::endl;

        // < - 60
        // > - 62
        // ^ - 94
        // V - 118
        if (ii == 60) {
				--i;
		} else if (ii == 62) {
				++i;
		} else if (ii == 94) {
				--j;
		} else if (ii == 118) {
				++j;
		} else {
				std::cout << "Reached end" << std::endl;
                break;
		}

		arr[i][j] = 1;
	}

	int counter = 0;
    for (int ii = 0; ii < 1000; ++ii) {
        for (int jj = 0; jj < 1000; ++jj) {
		    if (arr[ii][jj] == 1) {
				++counter;
		    }
        }
    }
    
	std::cout << "fields: " << counter << std::endl;
	return 0;
}
