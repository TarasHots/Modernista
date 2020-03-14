#include "../part_1.h"

TEST(Part1Exercises, HandlesZeroInput) {
    ASSERT_EQ(part_1::exercise_1(0), 0);
}

TEST(Part1Exercises, HandlesSmallRange1) {
    ASSERT_EQ(part_1::exercise_1(2), 0);
}

TEST(Part1Exercises, HandlesSmallRange2) {
    ASSERT_EQ(part_1::exercise_1(3), 3);
}

TEST(Part1Exercises, HandlesBiggerRange) {
    ASSERT_EQ(part_1::exercise_1(10), 33);
}