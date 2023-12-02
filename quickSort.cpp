#include <iostream>
#include <vector>

int partition(std::vector<int>& vec, int start, int end)
{
    int pivot = vec[end];
    int i = start - 1;
    for (int j = start; j < end; ++j) {
        if (vec[j] < pivot) {
            ++i;
            std::swap(vec[j], vec[i]); 
        }
    }
    
    std::swap(vec[i + 1], vec[end]);
    return i + 1;
}

void quickSort(std::vector<int>& vec, int start, int end) {
    if (start < end) {
        int pivotIndex = partition(vec, start, end);
        quickSort(vec, start, pivotIndex - 1);
        quickSort(vec, pivotIndex + 1, end);
    }
}




int main()
{
    std::vector<int> vec{1, 4, 7, 34, 6, 2, 1, 7, 0, 43, 7};
    quickSort(vec, 0, vec.size() - 1);
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }

}

