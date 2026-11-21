#include <gtest/gtest.h>

#include "sort.hpp"

TEST(ShakerSort, mixed_numbers) {
    int actual[] = {12, 4, 19, 2, 8, 1};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 4, 8, 12, 19};

    biv::shaker_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом " << i
            << ": есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(ShakerSort, equal_elements) {
    int actual[] = {6, 6, 3, 9, 3, 1, 1};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 1, 3, 3, 6, 6, 9};

    biv::shaker_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

TEST(ShakerSort, reverse_order) {
    int actual[] = {30, 20, 10, 0, -10};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-10, 0, 10, 20, 30};

    biv::shaker_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}