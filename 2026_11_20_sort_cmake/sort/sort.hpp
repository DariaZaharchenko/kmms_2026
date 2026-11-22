#pragma once

namespace biv {
    void bubble_sort_classic(int* arr, const int size);
    void bubble_sort_no_swaped_opt(int* arr, const int size);
	void bubble_sort_exit(int* const arr, const int size);
    void shaker_sort(int* const arr, const int size);
    void shaker_sort_right(int* const arr, const int size);
    void odd_even_sort(int* const arr, const int size);
    void comb_sort(int* const arr, const int size);
    void selection_sort(int* const arr, const int size);
    void insert_sort(int* const arr, const int size);
    void shell_sort(int* const arr, const int size);
    void insert_sort_binary_search(int* const arr, const int size);
}