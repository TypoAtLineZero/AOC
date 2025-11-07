#include <iostream>

// Taken from
// http://www.zedwood.com/article/cpp-md5-function
#include "md5.h"

int main() {
	std::string hash_pre = "yzbqklnj";
    std::string hash_suff = "000000";
    std::string hash = hash_pre + hash_suff;

    std::cout << "hash: " << md5(hash) << std::endl;
	return 0;
}
