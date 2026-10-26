#include <iostream>

int main()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Введите элемент: ";
        std::cin >> arr[i];
    }

    bool is_increas = true;
    bool is_decreas = true;
    for (int i = 0; i < size - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            is_increas = false;
        }
        if (arr[i] < arr[i + 1]) {
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
