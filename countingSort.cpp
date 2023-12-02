#include <iostream>
#include <vector>

std::vector<int> countingSort(std::vector<int>& vec) {
    int max = vec[0];
    int size = vec.size();

    for (int i = 1; i < size; ++i) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }

    std::vector<int> counting(max + 1, 0);

    for (int i = 0; i < size; ++i) {
        ++counting[vec[i]];
    }

    for (int i = 1; i <= max; ++i) {
        counting[i] += counting[i - 1];
    }

    std::vector<int> output(size);

    for (int i = size - 1; i >= 0; --i) {
        output[counting[vec[i]] - 1] = vec[i];
        --counting[vec[i]];
    }

    return output;
}

int main() {
    std::vector<int> vec{2, 5, 3, 0, 2, 3, 0, 3};
    std::vector<int> output = countingSort(vec);

    for (const auto& it : output) {
        std::cout << it << " ";
    }

    return 0;
}
