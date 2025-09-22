#include <fstream>
#include <iostream>
#include <string>

int main ( ) {
    std::ifstream inputfile("AOC2_input");
    std::string input;
    std::getline(inputfile, input);
    inputfile.close();

    return 0;
}
