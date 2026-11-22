#include <iostream>
#include <chrono>
#include <random>
#include <fstream>

#include "sort.hpp"

int main() {
    system("chcp 65001");
    std::ofstream file("results.md");

if (!file.is_open()) {
    std::cout << "Не удалось создать results.md" << std::endl;
    return 1;
}

file << "# Результаты сортировок\n\n";

    const int sizes[] = {10000, 100000};
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(-100000, 100000);

    file << "| Алгоритм | Время (сек.) |\n";
    file << "|---|---:|\n";
    for (int size : sizes) {
        int* original = new int[size];

        for (int i = 0; i < size; i++) {
            original[i] = dist(gen);
        }

        int* arr = new int[size];

        std::cout << "\nРазмер массива: " << size << std::endl;

        for (int i = 0; i < size; i++) arr[i] = original[i];

        auto start = std::chrono::high_resolution_clock::now();
        biv::bubble_sort_classic(arr, size);
        auto end = std::chrono::high_resolution_clock::now();

        std::chrono::duration<double> sec = end - start;

        file << "| Bubble sort classic | " << sec.count() << " |\n";

        for (int i = 0; i < size; i++) arr[i] = original[i];

        start = std::chrono::high_resolution_clock::now();
        biv::bubble_sort_no_swaped_opt(arr, size);
        end = std::chrono::high_resolution_clock::now();

        sec = end - start;
        file << "| Bubble sort no swaped opt | " << sec.count() << " |\n";
        std::cout << "Bubble sort no swapped optimization: " << sec.count() << std::endl;
    
        for (int i = 0; i < size; i++) arr[i] = original[i];

        start = std::chrono::high_resolution_clock::now();
        biv::bubble_sort_exit(arr, size);
        end = std::chrono::high_resolution_clock::now();

        sec = end - start;
        file << "| Bubble sort exit | " << sec.count() << " |\n";
        std::cout << "Bubble sort exit: " << sec.count() << std::endl;

        for (int i = 0; i < size; i++) arr[i] = original[i];

        start = std::chrono::high_resolution_clock::now();
        biv::shaker_sort(arr, size);
        end = std::chrono::high_resolution_clock::now();

        sec = end - start;
        file << "| Shaker sort | " << sec.count() << " |\n";
        std::cout << "Shaker sort: " << sec.count() << std::endl;

        for (int i = 0; i < size; i++) arr[i] = original[i];

        start = std::chrono::high_resolution_clock::now();
        biv::shaker_sort_right(arr, size);
        end = std::chrono::high_resolution_clock::now();

        sec = end - start;
        file << "|Shaker sort right | " << sec.count() << " |\n";
        std::cout << "Shaker sort right: " << sec.count() << std::endl;

        for (int i = 0; i < size; i++) arr[i] = original[i];

        start = std::chrono::high_resolution_clock::now();
        biv::odd_even_sort(arr, size);
        end = std::chrono::high_resolution_clock::now();

        sec = end - start;
        file << "| Odd-even sort | " << sec.count() << " |\n";
        std::cout << "Odd-even sort: " << sec.count() << std::endl;
       
        for (int i = 0; i < size; i++) arr[i] = original[i];

        start = std::chrono::high_resolution_clock::now();
        biv::comb_sort(arr, size);
        end = std::chrono::high_resolution_clock::now();

        sec = end - start;
        file << "| Comb sort | " << sec.count() << " |\n";
        std::cout << "Comb sort: " << sec.count() << std::endl;
       
        for (int i = 0; i < size; i++) arr[i] = original[i];

        start = std::chrono::high_resolution_clock::now();
        biv::selection_sort(arr, size);
        end = std::chrono::high_resolution_clock::now();

        sec = end - start;
        file << "| Selection sort | " << sec.count() << " |\n";
        std::cout << "Selection sort: " << sec.count() << std::endl;
      
        for (int i = 0; i < size; i++) arr[i] = original[i];

        start = std::chrono::high_resolution_clock::now();
        biv::insert_sort(arr, size);
        end = std::chrono::high_resolution_clock::now();

        sec = end - start;
        file << "| Insertion sort | " << sec.count() << " |\n";
        std::cout << "Insertion sort: " << sec.count() << std::endl;

        for (int i = 0; i < size; i++) arr[i] = original[i];

        start = std::chrono::high_resolution_clock::now();
        biv::shell_sort(arr, size);
        end = std::chrono::high_resolution_clock::now();

        sec = end - start;
        file << "| Shell sort | " << sec.count() << " |\n";
        std::cout << "Shell sort: " << sec.count() << std::endl;

        for (int i = 0; i < size; i++) arr[i] = original[i];

        start = std::chrono::high_resolution_clock::now();
        biv::insert_sort_binary_search(arr, size);
        end = std::chrono::high_resolution_clock::now();

        sec = end - start;
        file << "| Binary insertion sort | " << sec.count() << " |\n";
        std::cout << "Binary insertion sort: " << sec.count() << std::endl;

        delete[] arr;
        delete[] original;
    }

    return 0;
};