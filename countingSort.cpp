#include <iostream>
#include <vector>

void countingSort(std::vector<int>& vec) {
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

    vec = output;
}

int main() {
    std::vector<int> vec{2, 5, 3, 0, 2, 3, 0, 3};
    countingSort(vec);

    for (const auto& it : vec) {
        std::cout << it << " ";
    }

    return 0;
}
