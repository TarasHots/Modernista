#include "../part_1.h"

TEST(Part1Exercise4, HandlesSimpleInput) {
    ASSERT_EQ(part_1::exercise_4(2), 2);
    ASSERT_EQ(part_1::exercise_4(3), 3);
    ASSERT_EQ(part_1::exercise_4(4), 3);
    ASSERT_EQ(part_1::exercise_4(5), 5);
    ASSERT_EQ(part_1::exercise_4(20), 19);
    ASSERT_EQ(part_1::exercise_4(1), 0);
}
