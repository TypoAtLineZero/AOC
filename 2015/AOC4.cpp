#include <iostream>
#include <sstream>

// Taken from
// http://www.zedwood.com/article/cpp-md5-function
#include "md5.h"

int main() {
	std::string hash_pre = "yzbqklnj";
    std::string smallest_hash = "c6404eeb31cf4da2e4b224ebc03aea10";
    std::cout << "smallest: " << std::stoi(smallest_hash, 0, 64) << std::endl;
    int j;

    for ( int i = 0; i < 1000000; ++i) {        // loop for p1
    //for ( int i = 0; i < 10000000; ++i) {     // loop for p2
        auto s = std::to_string(i);

        if ( int(s.size()) < 6 ) {
            s.insert(0, 6 - s.size(), '0');
        }

        std::string hash_str = hash_pre + s;
        std::string hash = md5(hash_str);

        std::cout << "Hash: " << hash << std::endl;
        if (hash < smallest_hash) {
            smallest_hash = hash;
            j = i;
        }

    }

    std::cout << "Smallest hash: " << smallest_hash << std::endl;
    std::cout << "Prefix: " << j << std::endl;

	return 0;
}
