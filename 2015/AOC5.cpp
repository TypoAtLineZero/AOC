#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string filename="AOC5_input";

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    long total_paper = 0; // Wrapping paper
    long total_ribbon = 0; // Ribbon
    string line;

    while (getline(file, line)) {
        vector<int> dimensions;
        stringstream ss(line);
        string part;
    }
    
    return 0;
}


