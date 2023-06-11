#include <iostream>

int binarySearch(int* arr, int num, int start, int end)
{
	
	while (start <= end) {
		int mid = (start + end)/2;                    																
		if (arr[mid] == num) {
			return mid;
		}
		else if (arr[mid] < num) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	
	return -1;	
}

int reqBinarySearch(int* arr, int num, int start, int end)
{
	int mid = (start + end)/2;

	if (arr[mid] == num) {
		return mid;
	}
	else if (arr[mid] < num) {
	   return reqBinarySearch(arr, num,  mid + 1, end);

	}
	else {
		return reqBinarySearch(arr, num, start, mid - 1);
	}

	

}


int main()
{
	int* arr;
	int size;
	std::cout << "insert size of array\n";
	std::cin >> size;
	arr = new int [size];
	


	std::cout << "insert elements for array\n";
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
	
	int num;
	std::cout << "insert searching element: ";
	std::cin >> num;

	std::cout << reqBinarySearch(arr, num, 0, size - 1);
}
