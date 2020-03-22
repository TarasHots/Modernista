#include "../part_1.h"

TEST(Part1Exercise3, HandlesCorrectly1) {
    ASSERT_EQ(part_1::exercise_3(6, 10), 30);
}

TEST(Part1Exercise3, HandlesCorrectly2) {
    ASSERT_EQ(part_1::exercise_3(12, 18), 36);
}

TEST(Part1Exercise3, HandlesNegativesCorrectly) {
    ASSERT_EQ(part_1::exercise_3(-12, -18), 36);
}

TEST(Part1Exercise3, HandlesTwoInIterator) {
    std::vector<u_long> values {6, 10};
    ASSERT_EQ(part_1::exercise_3_iter(values.cbegin(), values.cend()), 30);
}

TEST(Part1Exercise3, HandlesMoreThanTwo) {
    std::vector<u_long> values {17, 13, 73};
    ASSERT_EQ(part_1::exercise_3_iter(values.cbegin(), values.cend()), 16133);
}

TEST(Part1Exercise3, HandlesFloating) {
    std::vector<int> values {17, -1, 73, -1009};
    ASSERT_EQ(part_1::exercise_3_iter(values.cbegin(), values.cend()), 1252169);
}
