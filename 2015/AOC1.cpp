
#include <fstream>
#include <iostream>
#include <string>

int main ( ) {
    std::ifstream inputfile("AOC1_input");
    std::string input;
    std::getline(inputfile, input);
    inputfile.close();

    int balance = 0;
	int position = 0;
    for (char c : input) {
        if (c == '(') {
            balance += 1;
		    ++position;
        } else if (c == ')') {
            balance -= 1;
			++position;
        } else {
            std::cerr << "Invalid character: " << c << std::endl;
        }
		if (balance == -1) {
				std::cout << "Reaching floor -1 at: " << position << std::endl;
		}
    }

    std::cout << "Balance: " << balance << '\n';
    return 0;
}
