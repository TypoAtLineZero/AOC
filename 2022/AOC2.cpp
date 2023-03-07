// A for Rock, B for Paper, and C for Scissors -> Every A = 8P, B = 1P, C = 6P
// X for Rock, Y for Paper, and Z for Scissors

// shape you selected (1 for Rock, 2 for Paper, and 3 for Scissors
// plus the score for the outcome of the round (0 if you lost, 3 if the round was a draw, and 6 if you won).

// What would your total score be if everything goes exactly according to your strategy guide?


#include <fstream>
#include <iostream>

// Part 1: A should be 330x, B should be 1098x, C should be 1072x 
int main(){

    uint16_t selection;

    std::cout << "Enter Part number:" << std::endl;
    std::cin >> selection;

    std::fstream fd;
    fd.open("AOC2_input", std::ios::in);

    if (fd.is_open()){
        std::string tp;
        uint16_t Acount {0};
        uint16_t Bcount {0};
        uint16_t Ccount {0};

        if(selection == 1){
            while(getline(fd, tp)){
                try
                {
                    if (tp.at(0) == 'A' && tp.at(2) == 'X'){
                        Acount += 4;
                    }

                    if (tp.at(0) == 'A' && tp.at(2) == 'Y'){
                        Acount += 8;
                    }

                    if (tp.at(0) == 'A' && tp.at(2) == 'Z'){
                        Acount += 3;
                    }


                    if (tp.at(0) == 'B' && tp.at(2) == 'X'){
                        Bcount += 1;
                    }

                    if (tp.at(0) == 'B' && tp.at(2) == 'Y'){
                        Bcount += 5;
                    }

                    if (tp.at(0) == 'B' && tp.at(2) == 'Z'){
                        Bcount += 9;
                    }


                    if (tp.at(0) == 'C' && tp.at(2) == 'X'){
                        Ccount += 7;
                    }

                    if (tp.at(0) == 'C' && tp.at(2) == 'Y'){
                        Ccount += 2;
                    }

                    if (tp.at(0) == 'C' && tp.at(2) == 'Z'){
                        Ccount += 6;
                    }
                }
                catch(const std::exception& e)
                {
                    // For empty line at the end
                    break;
                }
            }
        }

        // ==================================================================

        if (selection == 2){
            while(getline(fd, tp)){
                try
                {
                    // shape you selected (1 for Rock, 2 for Paper, and 3 for Scissors
// plus the score for the outcome of the round (0 if you lost, 3 if the round was a draw, and 6 if you won).
                    if (tp.at(0) == 'A' && tp.at(2) == 'X'){
                        Acount += 3;
                    }

                    if (tp.at(0) == 'A' && tp.at(2) == 'Y'){
                        Acount += 4;
                    }

                    if (tp.at(0) == 'A' && tp.at(2) == 'Z'){
                        Acount += 8;
                    }


                    if (tp.at(0) == 'B' && tp.at(2) == 'X'){
                        Bcount += 1;
                    }

                    if (tp.at(0) == 'B' && tp.at(2) == 'Y'){
                        Bcount += 5;
                    }

                    if (tp.at(0) == 'B' && tp.at(2) == 'Z'){
                        Bcount += 9;
                    }


                    if (tp.at(0) == 'C' && tp.at(2) == 'X'){
                        Ccount += 2;
                    }

                    if (tp.at(0) == 'C' && tp.at(2) == 'Y'){
                        Ccount += 6;
                    }

                    if (tp.at(0) == 'C' && tp.at(2) == 'Z'){
                        Ccount += 7;
                    }
                }
                catch(const std::exception& e)
                {
                    // For empty line at the end
                    break;
                }
            }
        }
        
    
    // std::cout <<  Acount << "x equals " << Acount*8 << " Points" << std::endl;
    // std::cout <<  Bcount << "x equals " << Bcount*1 << " Points" << std::endl;
    // std::cout <<  Ccount << "x equals " << Ccount*6 << " Points" << std::endl;
    std::cout <<  "Overall: " << Acount + Bcount + Ccount << " Points" << std::endl;
    }

    fd.close();
}