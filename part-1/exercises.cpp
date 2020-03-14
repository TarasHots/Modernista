#include "part_1.h"

u_int64_t part_1::exercise_1(u_int64_t to)
{
    u_int64_t sum = 0;

    for (size_t i = 3; i <= to; ++i)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }

    return sum;
}

u_long part_1::exercise_2(u_long a, u_long b)
{
    u_long max {}, min {}, tmp {};

    max = std::max(a, b);
    min = std::min(a, b);

    while (min != 0)
    {
        tmp = max % min;
        max = min;
        min = tmp;
    }

    return max;
}