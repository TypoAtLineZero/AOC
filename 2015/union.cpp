#include <fstream>
#include <iostream>
#include <string>

union test {
    int a;
    int b;
};

union test1 {
    int data;
    struct {
        int a;
        int b;
    };
};

int main ( ) {
    test lol;
    std::cout << "unchanged: " << lol.a << ", " << lol.b << std::endl;
    lol.a = 3;
    std::cout << "3: " << lol.a << ", " << lol.b << std::endl;
    lol.b = 5.1f;
    std::cout << "float: " << lol.a << ", " << lol.b << std::endl;
    std::cout << "--------------------" << std::endl;

    test1 lool;
    std::cout << lool.data << ", " << lool.a << ", " << lool.b << std::endl;
    lool.data = 1;
    std::cout << lool.data << ", " << lool.a << ", " << lool.b << std::endl;
    lool.a = 2;
    std::cout << lool.data << ", " << lool.a << ", " << lool.b << std::endl;
    lool.b = 5;
    std::cout << lool.data << ", " << lool.a << ", " << lool.b << std::endl;


    return 0;
}
