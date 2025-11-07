#include <iostream>
#include <sstream>

// Taken from
// http://www.zedwood.com/article/cpp-md5-function
#include "md5.h"

int main() {
	std::string hash_pre = "yzbqklnj";
    // hash_pre + 000000
    std::string smallest_hash = "c0bb7d0da218980856cdfc89a67c1669";
    std::cout << "smallest: " << std::stoi(smallest_hash, 0, 64) << std::endl;
    std::stringstream ss;
    int j;
    ss << std::hex << smallest_hash;
    ss >> j;
    std::cout << j << std::endl;

    for ( int i = 0; i < 11; ++i) {
        auto s = std::to_string(i);

        if ( int(s.size()) < 6 ) {
        //if ( s.size() < 6 ) {
            s.insert(0, 6 - s.size(), '0');
        }

        std::string hash_str = hash_pre + s;
        std::string hash = md5(hash_str);

        std::cout << "asd: " << std::stoi(hash, 0, 64) << std::endl;

    //    if ( std::stoi(hash) < std::stoi(smallest_hash) ) {
    //        std::cout << "string: " << s << std::endl;
    //        std::cout << "hash: " << hash << std::endl;
    //    }
    }

	return 0;
}
