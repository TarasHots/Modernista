#include "../part_1.h"

TEST(Part1Exercise2, HandlesNotTooManyIterations) {
    ASSERT_EQ(part_1::exercise_2(5, 10), 5);
}

TEST(Part1Exercise2, HandlesHundreds) {
    ASSERT_EQ(part_1::exercise_2(100, 200), 100);
}

TEST(Part1Exercise2, HandlesThousands) {
    ASSERT_EQ(part_1::exercise_2(10000, 200000), 10000);
}

TEST(Part1Exercise2, HandlesDifferentParameters) {
    ASSERT_EQ(part_1::exercise_2(200, 50), 50);
}