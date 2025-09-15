
#include <fstream>
#include <iostream>
#include <string>

int main ( ) {
    std::ifstream inputfile("AOC1_input");
    std::string input;
    std::getline(inputfile, input);
    inputfile.close();

    int balance = 0;
    for (char c : input) {
        if (c == '()') {
            balance += 1;
        } else if (c == ')') {
            balance -= 1;
        } else {
            std::cerr << "Invalid character: " << c << std::endl;
        }
    }

    std::cout << "Balance: " << balance << '\n';
    return 0;
}