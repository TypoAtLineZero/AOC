#include <iostream>
#include <fstream>
#include <sstream>

// Solutions for part 2 taken from
// https://github.com/dombalaz/aoc15/blob/master/lib/aoc15/d05.cpp
auto twoPairsOfTwoLetters(std::string_view in) -> bool
{
    if (in.size() < 2) {
        return false;
    }
    auto top = in.size() - 2;
    for(auto i = 1U; i < top; ++i) {
        if (in.substr(i + 1).find(in.substr(i - 1, 2)) != std::string_view::npos) {
            return true;
	    }
    }
    return false;
}

auto repeatedLetterWithLetterBetween(std::string_view in) -> bool
{
    for (size_t i = 2; i < in.size(); ++i) {
        if (in.at(i) == in.at(i - 2)) {
	    return true;
        }
    }
    return false;
}


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
    //std::string doubleLetter1 = "aa";
    //std::string doubleLetter2 = "bb";
    //std::string doubleLetter3 = "cc";
    //std::string doubleLetter4 = "dd";
    //std::string doubleLetter5 = "ee";
    //std::string doubleLetter6 = "ff";
    //std::string doubleLetter7 = "gg";
    //std::string doubleLetter8 = "hh";
    //std::string doubleLetter9 = "ii";
    //std::string doubleLetter10 = "jj";
    //std::string doubleLetter11 = "kk";
    //std::string doubleLetter12 = "ll";
    //std::string doubleLetter13 = "mm";
    //std::string doubleLetter14 = "nn";
    //std::string doubleLetter15 = "oo";
    //std::string doubleLetter16 = "pp";
    //std::string doubleLetter17 = "qq";
    //std::string doubleLetter18 = "rr";
    //std::string doubleLetter19 = "ss";
    //std::string doubleLetter20 = "tt";
    //std::string doubleLetter21 = "uu";
    //std::string doubleLetter22 = "vv";
    //std::string doubleLetter23 = "ww";
    //std::string doubleLetter24 = "xx";
    //std::string doubleLetter25 = "yy";
    //std::string doubleLetter26 = "zz";
    
    // subString - Not wanted
    //std::string subString_1 = "ab";
    //std::string subString_2 = "cd";
    //std::string subString_3 = "pq";
    //std::string subString_4 = "xy";


    while (getline(file, line)) {
        // PART 2
        if (twoPairsOfTwoLetters(line) && repeatedLetterWithLetterBetween(line)) {
            ++happy;
        }

        // PART 1
        //vowels = 0;
        //doubleLetter = false;
        //subString = false;

        //for (int i = 0; line[i]!='\0'; ++i) {
        //    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') {
        //        ++vowels;
        //    }
        //}
        //
        //if (line.find(subString_1) != std::string::npos || 
        //        line.find(subString_2) != std::string::npos || 
        //        line.find(subString_3) != std::string::npos || 
        //        line.find(subString_4) != std::string::npos) {
        //    subString = true;
        //}

        //if (line.find(doubleLetter1) != std::string::npos || 
        //        line.find(doubleLetter2) != std::string::npos || 
        //        line.find(doubleLetter3) != std::string::npos || 
        //        line.find(doubleLetter4) != std::string::npos ||
        //        line.find(doubleLetter5) != std::string::npos ||
        //        line.find(doubleLetter6) != std::string::npos ||
        //        line.find(doubleLetter7) != std::string::npos ||
        //        line.find(doubleLetter8) != std::string::npos ||
        //        line.find(doubleLetter9) != std::string::npos ||
        //        line.find(doubleLetter10) != std::string::npos ||
        //        line.find(doubleLetter11) != std::string::npos ||
        //        line.find(doubleLetter12) != std::string::npos ||
        //        line.find(doubleLetter13) != std::string::npos ||
        //        line.find(doubleLetter14) != std::string::npos ||
        //        line.find(doubleLetter15) != std::string::npos ||
        //        line.find(doubleLetter16) != std::string::npos ||
        //        line.find(doubleLetter17) != std::string::npos ||
        //        line.find(doubleLetter18) != std::string::npos ||
        //        line.find(doubleLetter19) != std::string::npos ||
        //        line.find(doubleLetter20) != std::string::npos ||
        //        line.find(doubleLetter21) != std::string::npos ||
        //        line.find(doubleLetter22) != std::string::npos ||
        //        line.find(doubleLetter23) != std::string::npos ||
        //        line.find(doubleLetter24) != std::string::npos ||
        //        line.find(doubleLetter25) != std::string::npos ||
        //        line.find(doubleLetter26) != std::string::npos) {
        //    doubleLetter = true;
        //}

        //if (vowels > 2 && subString == false && doubleLetter == true) {
        //    ++happy;
        //    std::cout << line << std::endl;
        //}
    }

    std::cout << "Happy words: " << happy << std::endl;
    return 0;
}
