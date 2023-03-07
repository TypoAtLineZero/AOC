
// #include <fstream>
// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main(){

//     // std::ifstream inputfile("AOC1_input");
//     std::fstream inputfile("AOC1_input", ios::in);
//     string line, file; 
//     uint32_t currentmax {0};


//     while (getline(inputfile, line)){
//         file += line + '\n';
//         cout << "White spaces: " << count(file.begin(), file.end(), ' ');
//     }

//     // while (inputfile >> currentmax){
//     //     // std::cout << currentmax << std::endl;

//     //     uint32_t currentsection {0};


//     // }

//     return 0;
// }



// istream::get example
#include <iostream>     // std::cin, std::cout
#include <fstream>      // std::ifstream

int main () {
  char str[256];

  std::cout << "Enter the name of an existing text file: ";
  std::cin.get (str,256);    // get c-string

  std::ifstream is(str);     // open file

  char c;
  while (is.get(c))          // loop getting single characters
    std::cout << c;

  is.close();                // close file

  return 0;
}