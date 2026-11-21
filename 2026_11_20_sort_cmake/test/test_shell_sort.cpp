#include <gtest/gtest.h>

#include "sort.hpp"

TEST(ShellSort, mixed_numbers) {
    int actual[] = {31, 8, 17, 4, 25, 11, 2};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {2, 4, 8, 11, 17, 25, 31};

    biv::shell_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массивы отличаются в элементе с индексом " << i
            << ": есть " << actual[i]
            << ", а должен быть " << expected[i];
    }
}

TEST(ShellSort, equal_elements) {
    int actual[] = {12, 5, 12, 3, 5, 9, 3};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {3, 3, 5, 5, 9, 12, 12};

    biv::shell_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

TEST(ShellSort, reverse_order) {
    int actual[] = {40, 30, 20, 10, 0, -10};
    const int actual_size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-10, 0, 10, 20, 30, 40};

    biv::shell_sort(actual, actual_size);

    for (int i = 0; i < actual_size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Ошибка в элементе с индексом " << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}