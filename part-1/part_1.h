#ifndef MODERNISTA_PART_1_H
#define MODERNISTA_PART_1_H

#include <iostream>
#include <numeric>
#include <gtest/gtest.h>

namespace part_1
{
    //numbers sum if can divide to 3 or 5
    u_int64_t exercise_1(u_int64_t to);

    //GCD
    u_long exercise_2(u_long a, u_long b);

    //LCM
    int exercise_3(int a, int b);

    template <class InputIt>
    int exercise_3_iter(InputIt first, InputIt last)
    {
        return std::accumulate(first, last, 1, part_1::exercise_3);
    }

    //First prime number lesser then input
    unsigned int exercise_4(unsigned int limit);
}

#endif //MODERNISTA_PART_1_H
