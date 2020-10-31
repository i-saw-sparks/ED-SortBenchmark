//
// Created by manie on 31/10/2020.
//

#ifndef SORTBENCHMARK_SORTBENCHMARKER_H
#define SORTBENCHMARK_SORTBENCHMARKER_H

#include "StaticList.h"
#include <string>
#include <ostream>
#include <chrono>

class SortBenchmarker {
public:
    static void benchmark(StaticList<int,100000>&, std::ostream&);
private:
    static std::chrono::duration<float> benchBubble(StaticList<int,100000>&);
    static std::chrono::duration<float> benchQuick(StaticList<int,100000>&);
    static std::chrono::duration<float> benchMerge(StaticList<int,100000>&);
    static std::chrono::duration<float> benchSelect(StaticList<int,100000>&);
    static std::chrono::duration<float> benchInsert(StaticList<int,100000>&);
    static std::chrono::duration<float> benchShell(StaticList<int,100000>&);
};




#endif //SORTBENCHMARK_SORTBENCHMARKER_H
