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

int part_1::exercise_3(int a, int b)
{
    auto max = std::max(std::abs(a), std::abs(b));

    do
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }

        ++max;
    } while (true);
}

bool is_prime(unsigned int const num)
{
    if (num <= 3)
    {
        return num > 1;
    }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    } else {
        for (int i = 5; i * i <= num; i += 6) {
            if (i % 2 == 0) {
                return false;
            }
        }
    }

    return true;
}

unsigned int part_1::exercise_4(unsigned int limit)
{
    for (unsigned int i = limit; i > 1; i--) {
        if (is_prime(i)) {
            return i;
        }
    }

    return 0;
}
