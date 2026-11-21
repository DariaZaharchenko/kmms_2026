#include <gtest/gtest.h>

#include "sort.hpp"

TEST(InsertSort, mixed_numbers) {
    int actual[] = {9, 4, 12, 1, 6, 3};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 3, 4, 6, 9, 12};

    biv::insert_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом " << i
            << ": есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(InsertSort, equal_elements) {
    int actual[] = {7, 3, 7, 2, 3, 2};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {2, 2, 3, 3, 7, 7};

    biv::insert_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

TEST(InsertSort, negative_numbers) {
    int actual[] = {-6, -15, -2, -20, -9};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-20, -15, -9, -6, -2};

    biv::insert_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}