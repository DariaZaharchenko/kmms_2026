#include <gtest/gtest.h>
#include "sort.hpp"

TEST(Equal, without_equal_elemens) {
    int actual[] = {5, 2, 8, 1, 3};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 5, 8};

    biv::bubble_sort_classic(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив ожидаемый и отсортированный отличаются в элементе с индексом "
            << i << ": "
            << "есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(Equal, sorted_array) {
    int actual[] = {1, 2, 3, 4, 5};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4, 5};

    biv::bubble_sort_classic(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

TEST(Equal, reversed_array) {
    int actual[] = {5, 4, 3, 2, 1};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4, 5};

    biv::bubble_sort_classic(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}





