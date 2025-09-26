#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
 
int main ( ) {
    std::ifstream input2("AOC2_input");
	int index = 1;
    int holder[3];

    for (std::string line; std::getline(input2, line, 'x');) {
		holder[index - 1] = std::stoi(line);
//		std::cout << line << '\n';
		std::cout << index;
		if (index % 3) {
				std::cout << "inside";
		}
		
		++index;
	}


	return 0;
}
