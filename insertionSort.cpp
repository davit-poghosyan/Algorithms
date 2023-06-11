#include <iostream>

void insertion_sort(int* arr, int size) 
{
	for (int i = 1; i < size; ++i) {
		int j = i - 1;
		int key = arr[i];
		while(key < arr[j] && j >= 0) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int* arr;
	int size;
	std::cout << "insert size: ";
	std::cin >> size;
	std::cout << "insert elements for array\n";
	arr = new int [size];

	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
		}

	insertion_sort(arr, size);

	std::cout << std::endl << std::endl;
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i];
	}	
}
