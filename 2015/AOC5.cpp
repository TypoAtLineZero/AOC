#include <iostream>
#include <fstream>
#include <sstream>
#include <regex>

int main() {
    std::string filename="AOC5_input";
    std::ifstream file(filename);
   
    if (!file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::string line;
    int happy = 0;
    int vowels;
    bool doubleLetter;
    bool subString;

    // doubleLetter - wanted
    std::string subString1 = "aa";
    std::string subString2 = "bb";
    std::string subString3 = "cc";
    std::string subString4 = "dd";
    std::string subString5 = "ee";
    std::string subString6 = "ff";
    std::string subString7 = "gg";
    std::string subString8 = "hh";
    std::string subString9 = "ii";
    std::string subString10 = "jj";
    std::string subString11 = "kk";
    std::string subString12 = "ll";
    std::string subString13 = "mm";
    std::string subString14 = "nn";
    std::string subString15 = "oo";
    std::string subString16 = "pp";
    std::string subString17 = "qq";
    std::string subString18 = "rr";
    std::string subString19 = "ss";
    std::string subString20 = "tt";
    std::string subString21 = "uu";
    std::string subString22 = "vv";
    std::string subString23 = "ww";
    std::string subString24 = "xx";
    std::string subString25 = "yy";
    std::string subString26 = "zz";
    
    // subString - Not wanted
    std::string subString_1 = "ab";
    std::string subString_2 = "cd";
    std::string subString_3 = "pq";
    std::string subString_4 = "xy";


    while (getline(file, line)) {
        vowels = 0;
        doubleLetter = false;
        subString = true;

        for (int i = 0; line[i]!='\0'; ++i) {
            if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') {
                ++vowels;
                std::cout << "line: " << line << std::endl;
                std::cout << "vowels: " << vowels << std::endl;
            }
        }
        
        if (line.find(subString_1) != std::string::npos || 
                line.find(subString_2) != std::string::npos || 
                line.find(subString_3) != std::string::npos || 
                line.find(subString_4) != std::string::npos) {
            std::cout << "here" << std::endl;
            subString = false;
        }

        if (line.find(subString1) != std::string::npos || 
                line.find(subString2) != std::string::npos || 
                line.find(subString3) != std::string::npos || 
                line.find(subString4) != std::string::npos) {
            std::cout << "here" << std::endl;
            doubleLetter = true;
        }

        if (vowels > 2 && subString == false && doubleLetter == true) {
            ++happy;
        }
    }

    std::cout << "Happy words: " << happy << std::endl;
    return 0;
}
