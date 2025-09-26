#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
 
int main ( ) {
    std::ifstream input2("AOC2_input");
    for (std::string line; std::getline(input2, line, 'x');)
        std::cout << line << '\n';



	return 0;
}
