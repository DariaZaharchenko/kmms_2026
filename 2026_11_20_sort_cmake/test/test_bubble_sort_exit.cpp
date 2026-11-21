#include <gtest/gtest.h>

#include "sort.hpp"

TEST(BubbleSortExit, with_equal_elements) {
    int actual[] = {7, 3, 7, 1, 3, 9, 1};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 1, 3, 3, 7, 7, 9};

    biv::bubble_sort_exit(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив ожидаемый и отсортированный отличаются в элементе с индексом "
            << i << ": "
            << "есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(BubbleSortExit, sorted_array) {
    int actual[] = {-12, -5, 0, 4, 18, 27};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-12, -5, 0, 4, 18, 27};

    biv::bubble_sort_exit(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

TEST(BubbleSortExit, negative_and_positive) {
    int actual[] = {15, -8, 0, -21, 6, 3};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-21, -8, 0, 3, 6, 15};

    biv::bubble_sort_exit(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}