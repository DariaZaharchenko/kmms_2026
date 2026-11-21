#include <gtest/gtest.h>

#include "sort.hpp"

TEST(OddEvenSort, mixed_numbers) {
    int actual[] = {8, 3, 7, 1, 9, 2};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 7, 8, 9};

    biv::odd_even_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом " << i
            << ": есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(OddEvenSort, equal_elements) {
    int actual[] = {4, 2, 4, 1, 2, 1, 4};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 1, 2, 2, 4, 4, 4};

    biv::odd_even_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

TEST(OddEvenSort, negative_numbers) {
    int actual[] = {-11, -2, -18, -5, -1};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-18, -11, -5, -2, -1};

    biv::odd_even_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}