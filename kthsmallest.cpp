
#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    // base case
    if (n == 1) {
        return arr[0];
    }
    // recursive case
    int max = findLargest(arr, n - 1); 															
    if (arr[n - 1] > max) {
        return arr[n - 1];
    }
    else {
        return max;
    }
}

int kthSmallest(int* arr, int size, int kth)
{
	// base case
	if (size == 1) {
		return  arr[0];
	}	

	// recursive case
	int min = kthSmallest(arr, size - 1, kth)
	if (arr[n - 1] < min) {
		return arr[n - 1];
	}
	else { 
		return min;
	}
}

int main() {
    int* arr;
    int size;
	std::cin >> size;
	arr = new int [size];
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    int largest = findLargest(arr, size);
    cout << "The largest value in the array is: " << largest << endl;
    return 0;
}

