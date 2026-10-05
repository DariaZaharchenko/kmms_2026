#include <iostream>

int main()
{
    system("chcp 65001 > nul");

    const int SIZE = 10;
    double a[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Введите " << i << "элемент: ";
        std::cin >> a[i];
    }

    bool is_increas = true;

    for (int i = 0; i < SIZE - 1; ++i)
    {
        if (a[i] > a[i + 1])
        {
            is_increas = false;
            break;
        }

    }
    if (is_increas)
    {
        std::cout << "Последовательность возрастающая";
    }
    else
    {
        std::cout << "Последовательность убывающая";
    }
    return 0;
}
