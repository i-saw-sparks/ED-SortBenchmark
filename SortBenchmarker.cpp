//
// Created by manie on 31/10/2020.
//
#include "SortBenchmarker.h"

void SortBenchmarker::benchmark(StaticList<int, 100000> &original, std::ostream& os) {
    os<<"Midiendo Quick..."<<std::endl;
    os<<benchQuick(original).count()<<" segundos"<<std::endl;
    os<<"Midiendo Merge..."<<std::endl;
    os<<benchMerge(original).count()<<" segundos"<<std::endl;
    os<<"Midiendo Shell..."<<std::endl;
    os<<benchShell(original).count()<<" segundos"<<std::endl;
    os<<"Midiendo Select..."<<std::endl;
    os<<benchSelect(original).count()<<" segundos"<<std::endl;
    os<<"Midiendo Insert..."<<std::endl;
    os<<benchInsert(original).count()<<" segundos"<<std::endl;
    os<<"Midiendo Burbuja..."<<std::endl;
    os<<benchBubble(original).count();
}

std::chrono::duration<float> SortBenchmarker::benchBubble(StaticList<int, 100000> &original) {
    StaticList<int, 100000> work(original);
    auto start = std::chrono::system_clock::now();
    work.sortByEnhancedBubble([](int a, int b){return a-b;});
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<float> elapsed = end - start;
    return elapsed;
}

std::chrono::duration<float> SortBenchmarker::benchQuick(StaticList<int, 100000> &original) {
    StaticList<int, 100000> work(original);
    auto start = std::chrono::system_clock::now();
    work.quickSort([](int a, int b){return a-b;});
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<float> elapsed = end - start;
    return elapsed;
}

std::chrono::duration<float> SortBenchmarker::benchShell(StaticList<int, 100000> &original) {
    StaticList<int, 100000> work(original);
    auto start = std::chrono::system_clock::now();
    work.sortByShell([](int a, int b){return a-b;});
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<float> elapsed = end - start;
    return elapsed;
}

std::chrono::duration<float> SortBenchmarker::benchInsert(StaticList<int, 100000> &original) {
    StaticList<int, 100000> work(original);
    auto start = std::chrono::system_clock::now();
    work.sortByInsert([](int a, int b){return a-b;});
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<float> elapsed = end - start;
    return elapsed;
}

std::chrono::duration<float> SortBenchmarker::benchMerge(StaticList<int, 100000> &original) {
    StaticList<int, 100000> work(original);
    auto start = std::chrono::system_clock::now();
    work.sortByMerge([](int a, int b){return a-b;});
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<float> elapsed = end - start;
    return elapsed;
}

std::chrono::duration<float> SortBenchmarker::benchSelect(StaticList<int, 100000> &original) {
    StaticList<int, 100000> work(original);
    auto start = std::chrono::system_clock::now();
    work.sortBySelect([](int a, int b){return a-b;});
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<float> elapsed = end - start;
    return elapsed;
}