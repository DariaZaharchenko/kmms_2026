#include "sort.hpp"
#include <utility> 
#include <iostream>

void biv::bubble_sort_classic(int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void biv::bubble_sort_no_swaped_opt(int* arr, const int size) {
    bool is_swapped;
    int i = 0;

    do {
        is_swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;

                is_swapped = true;
            }
        }

        i++;
    } while (is_swapped);
}

void biv::bubble_sort_exit(int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

void biv::shaker_sort(int* arr, const int size) {
    int begin = 0;
    int end = size - 1;
    bool is_swapped = true;

    while (is_swapped) {
        is_swapped = false;
        for (int i = begin; i < end; i++) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
                is_swapped = true;
            }
        }
        end--;

        if (!is_swapped) break;

        is_swapped = false;
        for (int i = end; i > begin; i--) {
            if (arr[i] < arr[i - 1]) {
                int t = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = t;
                is_swapped = true;
            }
        }
        begin++;
    }
}

void biv::shaker_sort_right(int* arr, const int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        bool swapped = false;
        int last = left;
        for (int j = left; j < right; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                last = j;
                swapped = true;
            }
        }
        if (!swapped) break;
        right = last;

        swapped = false;
        for (int j = right; j > left; j--) {
            if (arr[j - 1] > arr[j]) { 
                std::swap(arr[j - 1], arr[j]); swapped = true; 
            }
        }
        if (!swapped) break;
        left++;
    }
}

void biv::odd_even_sort(int* arr, const int size) {
    bool is_swapped;
    do {
        is_swapped = false;
        for (int j = 0; j < size - 1; j+=2) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                is_swapped = true;
            }
        }
        for (int j  = 1; j < size - 1; j += 2) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                is_swapped = true;
            }
        }
    } while (is_swapped) ;
}

void biv::comb_sort(int* arr, const int size) {
    double factor = 1.3;
    int step = size - 1;
    bool is_swapped = true;

    while (step > 1 || is_swapped) {
        is_swapped = false;

        for (int i = 0; i + step < size; i++) {
            if (arr[i] > arr[i + step]) {
                int t = arr[i];
                arr[i] = arr[i + step];
                arr[i + step] = t;
                is_swapped = true;
            }
        }

        if (step > 1) {
            step /= factor;
        }
    }
}

void biv::selection_sort(int* arr, const int size) {
    for ( int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            int t = arr[i];
            arr[i] = arr[min];
            arr[min] = t;
        }
    }
}

void biv::insert_sort(int* arr, const int size) {
    for (int i = 1; i < size; i++) {
        int j = i;
        int x = arr[j];
        while (j > 0 && x < arr[j - 1]) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = x;
    }
}

void biv::shell_sort(int* arr, const int size) {
    int  step = size / 2;
    while (step > 0) {
        for (int i = step; i < size; i++) {
            int j = i;
            int x = arr[j];
            while (j >= step && x < arr[j - step]) {
                arr[j] = arr[j - step];
                j -= step;
            }
            arr[j] = x;
        }
        step /= 2;
    }
}