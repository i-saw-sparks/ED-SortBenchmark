//
// Created by manie on 31/10/2020.
//

#include "RandomListGenerator.h"

StaticList<int, 100000> &RandomListGenerator::generate() {
    StaticList<int, 100000> randomList;
    std::random_device rd;
    uint32_t seed = rd();

    std::mt19937 generator(seed);
    std::uniform_int_distribution<uint32_t>distribute(0,1000000);

    for (int i = 0; i < 100000; ++i)
        randomList.insert(distribute(generator), i-1);


    return randomList;
}
