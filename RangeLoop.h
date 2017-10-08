#ifndef PLAYING_WITH_CPP_11_RANGE_LOOP_H
#define PLAYING_WITH_CPP_11_RANGE_LOOP_H

#include <iostream>
#include <vector>

struct RangeLoop {
    void operator()()
    {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);

        for (int e: v) {
            std::cout << e << std::endl;
        }
    }
};

#endif //PLAYING_WITH_CPP_11_RANGE_LOOP_H
