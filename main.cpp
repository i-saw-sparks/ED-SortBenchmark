#include <iostream>
#include "RandomListGenerator.h"

int main() {
    StaticList<int, 5> list1, list2;
    RandomListGenerator::generate();
    list1.insert(5,-1);
    list1.insert(2,0);
    list1.insert(1,1);
    list1.insert(7,2);
    list1.insert(3,3);
    list2 = list1;
    list1.sortByMerge([](int a, int b) {
        return a-b;
    });

    for (int i = 0; i < 5; ++i) {
        std::cout<<list1.fetch(i);
    }

    std::cout<<std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cout<<list2.fetch(i);
    }

    return 0;
}