#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string filename="AOC2_input";

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    return 0;
}

