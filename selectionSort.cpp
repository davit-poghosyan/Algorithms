#include <iostream>

void selectionSort(int*& arr, int size)
{
	for (int i = 0; i < size; ++i) {
		int minindex = i; 
		for (int j = i + 1; j < size; ++j) {
			if (arr[minindex] < arr[j]) {
				std::swap(arr[minindex], arr[j]);
			}
		}
	}
}


int main()
{
	int* arr;
	int size;
	std::cout << "insert size: ";
	std::cin >> size;
	arr = new int [size];
	std::cout << "insert elements for array\n";
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
	selectionSort(arr, size);
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << "  ";
	}
}
