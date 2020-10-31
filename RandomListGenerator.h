//
// Created by manie on 31/10/2020.
//

#ifndef SORTBENCHMARK_RANDOMLISTGENERATOR_H
#define SORTBENCHMARK_RANDOMLISTGENERATOR_H

#include "StaticList.h"
#include <random>
#include <iostream>

class RandomListGenerator {
public:
    static void generate(StaticList<int, 100000>&);
    StaticList<int, 100000>& generate();
private:
    StaticList<int, 100000> data;
};


#endif //SORTBENCHMARK_RANDOMLISTGENERATOR_H
