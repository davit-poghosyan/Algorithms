#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i + 1; j < vec.size(); ++j) {
            if (vec[i] > vec[j]) {
                std::swap(vec[i], vec[j]);
            }
        }
    }
}

int main(){
    std::vector<int> vec;
    int value;
    std::cout << "insert value, -1 will terminate insertion\n";
    while (std::cin >> value && value != -1) { 
        vec.push_back(value);
    }    

    bubbleSort(vec);


    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
}