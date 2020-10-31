//
// Created by manie on 31/10/2020.
//

#include "RandomListGenerator.h"

void RandomListGenerator::generate(StaticList<int, 100000> &args) {
    std::random_device rd;
    uint32_t seed = rd();

    std::mt19937 generator(seed);
    std::uniform_int_distribution<uint32_t>distribute(0,1000000);

    for (int i = 0; i < 100000; ++i)
        args.insert(distribute(generator), i-1);

}

StaticList<int, 100000> &RandomListGenerator::generate() {
    std::random_device rd;
    uint32_t seed = rd();

    std::mt19937 generator(seed);
    std::uniform_int_distribution<uint32_t> distribute(0, 1000000);

    for (int i = 0; i < 100000; ++i)
        data.insert(distribute(generator), i - 1);

    return data;
}
