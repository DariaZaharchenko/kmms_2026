#include <gtest/gtest.h>

#include "sort.hpp"

TEST(SelectionSort, mixed_numbers) {
    int actual[] = {13, 2, 18, 7, 4, 11};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {2, 4, 7, 11, 13, 18};

    biv::selection_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом " << i
            << ": есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(SelectionSort, equal_elements) {
    int actual[] = {5, 1, 5, 3, 1, 8, 3};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 1, 3, 3, 5, 5, 8};

    biv::selection_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

TEST(SelectionSort, reverse_order) {
    int actual[] = {25, 20, 15, 10, 5};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {5, 10, 15, 20, 25};

    biv::selection_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}