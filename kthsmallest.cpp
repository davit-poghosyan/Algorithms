
#include <iostream>

int findLargest(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
	
    int max = findLargest(arr, n - 1); 															
    
    if (arr[n - 1] > max) {
        return arr[n - 1];
    }
    
    return max;
}

int kthSmallest(int* arr, int size, int kth)
{
    if (size == 1) {
	return  arr[0];
    }	

    int min = kthSmallest(arr, size - 1, kth)
    
    if (arr[n - 1] < min) {
    	return arr[n - 1];
    }  
    
    return min;
    
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
    std::cout << "The largest value in the array is: " << largest << endl;
	
    return 0;
}

