#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    std::string filename="AOC6_input";

    ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::string line;
    std::string part;
    
    while (getline(file, line)) {
        stringstream ss(line);

        // Split each dimension by 'x'
        while (getline(ss, part, 'x')) {
        }
    }

    file.close();

    return 0;
}

