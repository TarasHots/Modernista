#include "part_1.h"

void part_1::exercise_1()
{
    u_int64_t to {}, sum = 0;
    std::cout << "Enter `to`:" << std::endl;
    std::cin >> to;

    for (size_t i = 3; i <= to; ++i)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }

    std::cout << "Numbers sum:" << sum << std::endl;
}

void part_1::exercise_2()
{
    u_long a {}, b {}, max {}, min {}, tmp {};

    std::cout << "Enter two values:" << std::endl;
    std::cin >> a >> b;

    max = std::max(a, b);
    min = std::min(a, b);

    while (min != 0)
    {
        tmp = max % min;
        max = min;
        min = tmp;
    }

    std::cout << max << std::endl;
}