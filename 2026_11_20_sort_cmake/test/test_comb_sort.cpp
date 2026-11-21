#include <gtest/gtest.h>

#include "sort.hpp"

TEST(CombSort, unsorted_array) {
    int actual[] = {9, 4, 7, 2, 6, 1};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 4, 6, 7, 9};

    biv::comb_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом "
            << i << ": есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(CombSort, repeated_numbers) {
    int actual[] = {8, 3, 8, 1, 3, 5};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 3, 3, 5, 8, 8};

    biv::comb_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом "
            << i << ": есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(CombSort, reverse_array) {
    int actual[] = {10, 8, 6, 4, 2};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {2, 4, 6, 8, 10};

    biv::comb_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом "
            << i << ": есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}