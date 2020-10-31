//
// Created by manie on 31/10/2020.
//

#ifndef SORTBENCHMARK_SORTBENCHMARKER_H
#define SORTBENCHMARK_SORTBENCHMARKER_H

#include "StaticList.h"
#include <string>

template<typename T, int MAXSIZE = 4096>
class SortBenchmarker {
public:
    SortBenchmarker();
    SortBenchmarker(StaticList<T, MAXSIZE>&);
    std::string toSting();
private:
    StaticList<T, MAXSIZE> data;
};


#endif //SORTBENCHMARK_SORTBENCHMARKER_H
