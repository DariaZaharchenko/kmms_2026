#include <iostream>

int main()
{
    system("chcp 65001 > nul");

    const int SIZE = 10;
    double a[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Введите элемент: ";
        std::cin >> a[i];
    }

    bool is_increas = true;
    bool is_decreas = true;
    for (int i = 0; i < SIZE - 1; ++i)
    {
        if (a[i] > a[i + 1])
        {
            is_increas = false;
        }
        if (a[i] < a[i + 1]) {
            is_decreas = false;
        }

    }

    if (is_decreas && !is_increas) {
        std::cout << "Последовательность возрастающая" << std::endl;
    }
    else if (is_increas && !is_decreas) {
        std::cout << "Последовательность убывающая" << std::endl;
    }
    else if (is_increas && is_decreas) {
        std::cout << "Все элементы одинаковы" << std::endl;
    }
    else {
        std::cout << "Последовательность ни убывающая, ни возрастающая" << std::endl;
    }
    return 0;
}
