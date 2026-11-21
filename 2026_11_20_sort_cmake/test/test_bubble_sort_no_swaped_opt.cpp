#include <gtest/gtest.h>
#include "sort.hpp"

TEST(BubbleSortNoSwapedOpt, with_equal_elements) {
    int actual[] = {9, 2, 5, 2, 8, 1, 5};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 2, 5, 5, 8, 9};

    biv::bubble_sort_no_swaped_opt(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом " << i
            << ": есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(BubbleSortNoSwapedOpt, negative_numbers) {
    int actual[] = {-3, -15, -1, -20, -7};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-20, -15, -7, -3, -1};

    biv::bubble_sort_no_swaped_opt(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

TEST(BubbleSortNoSwapedOpt, almost_sorted) {
    int actual[] = {1, 2, 3, 7, 5, 6, 8};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 5, 6, 7, 8};

    biv::bubble_sort_no_swaped_opt(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}