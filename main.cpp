#include <iostream>
#include "RandomListGenerator.h"
#include "SortBenchmarker.h"

int main() {
    RandomListGenerator randGen;
    SortBenchmarker::benchmark(randGen.generate(), std::cout);
    return 0;
}