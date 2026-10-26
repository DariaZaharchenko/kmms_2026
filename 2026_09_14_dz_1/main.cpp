#include <iostream>

void my_sort(int *arr, const int size);

int main() {
	system("chcp 65001 > nul");
	int size;
	std::cout << "Введите размер массива: ";
	std::cin >> size;

	if (size <= 0) {
		std::cout << "Размер массива должен быть больше 0!" << std::endl;
		return 1;
	}
	int* arr = new int[size];
	std::cout << "Выведите " << size << " элемент массива:" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << "arr[" << i << "]=";
		std::cin >> arr[i];
	}

	std::cout << "Первоначальный массив: ";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	my_sort(arr, size);

	std::cout << "Отсортированный массив: ";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	delete[] arr;

	return 0;
}

void my_sort(int* arr, const int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}