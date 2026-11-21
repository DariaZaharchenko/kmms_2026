#include <gtest/gtest.h>

#include "sort.hpp"

TEST(ShakerSortRight, different_numbers) {
    int actual[] = {14, 3, 11, 6, 2, 17, 5};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {2, 3, 5, 6, 11, 14, 17};

    biv::shaker_sort_right(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом " << i
            << ": есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(ShakerSortRight, negative_and_positive) {
    int actual[] = {-4, 12, -9, 0, 7, -1};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-9, -4, -1, 0, 7, 12};

    biv::shaker_sort_right(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

TEST(ShakerSortRight, sorted_array) {
    int actual[] = {2, 5, 8, 11, 14, 17};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {2, 5, 8, 11, 14, 17};

    biv::shaker_sort_right(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}