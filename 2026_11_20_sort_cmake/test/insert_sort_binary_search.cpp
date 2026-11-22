#include <gtest/gtest.h>

#include "sort.hpp"

TEST(InsertSortBinarySearch, unsorted_array) {
    int actual[] = {14, 3, 9, 1, 12, 5};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 3, 5, 9, 12, 14};

    biv::insert_sort_binary_search(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом "
            << i << ": "
            << "есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(InsertSortBinarySearch, repeated_numbers) {
    int actual[] = {8, 3, 8, 1, 5, 3, 1};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 1, 3, 3, 5, 8, 8};

    biv::insert_sort_binary_search(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом "
            << i << ": "
            << "есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(InsertSortBinarySearch, negative_and_positive) {
    int actual[] = {-7, 12, -15, 0, 6, -2};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-15, -7, -2, 0, 6, 12};

    biv::insert_sort_binary_search(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом "
            << i << ": "
            << "есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}