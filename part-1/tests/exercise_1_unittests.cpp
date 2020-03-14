#include "../part_1.h"

TEST(Part1Exercise1, HandlesZeroInput) {
    ASSERT_EQ(part_1::exercise_1(0), 0);
}

TEST(Part1Exercise1, HandlesSmallRange1) {
    ASSERT_EQ(part_1::exercise_1(2), 0);
}

TEST(Part1Exercise1, HandlesSmallRange2) {
    ASSERT_EQ(part_1::exercise_1(3), 3);
}

TEST(Part1Exercise1, HandlesBiggerRange) {
    ASSERT_EQ(part_1::exercise_1(10), 33);
}