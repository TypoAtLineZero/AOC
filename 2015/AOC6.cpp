#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string filename="AOC6_input";

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

        // Split each dimension by 'x'
        while (getline(ss, part, 'x')) {
            dimensions.push_back(stoi(part));
        }

        if (dimensions.size() != 3) {
            cerr << "Invalid line format: " << line << endl;
            continue;
        }

        int l = dimensions[0];
        int w = dimensions[1];
        int h = dimensions[2];

        // Calculate wrapping paper
        long surface_area = static_cast<long>(l)*w + static_cast<long>(w)*h + static_cast<long>(h)*l;
        surface_area *= 2;

        long faces[] = {static_cast<long>(l)*w, static_cast<long>(w)*h, static_cast<long>(h)*l};
        int min_face = *min_element(faces, faces+3);

        total_paper += (surface_area + min_face);

        // Calculate ribbon
        long volume = static_cast<long>(l) * w * h;

        vector<long> perimeters;
        perimeters.push_back(static_cast<long>(2)*(l+w));
        perimeters.push_back(static_cast<long>(2)*(w+h));
        perimeters.push_back(static_cast<long>(2)*(h+l));

        long min_perimeter = *min_element(perimeters.begin(), perimeters.end());

        total_ribbon += (volume + min_perimeter);
    }

    file.close();
    cout << "Total square feet of wrapping paper needed: " << total_paper << endl;
    cout << "Total feet of ribbon needed: " << total_ribbon << endl;

    return 0;
}

