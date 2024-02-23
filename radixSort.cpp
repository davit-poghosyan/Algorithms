#include <iostream>
#include <vector>
#include <climits>

void countingSort(std::vector<int>& vec, int exponent) {
    std::vector<int> counting (10);

    for (int i = 0; i < vec.size(); ++i) {
        ++counting[(vec[i] / exponent) % 10];
    }

    for (int i = 1; i < counting.size(); ++i) {
        counting[i] += counting[i - 1];
    }

    std::vector<int> output(vec.size());

    for (int i = vec.size() - 1; i >= 0; --i) {
        output[counting[(vec[i] / exponent) % 10] - 1] = vec[i];
        --counting[(vec[i] / exponent) % 10];
    }

    for (int i = 0; i < vec.size(); ++i) {
        vec[i] = output[i];
    }
}


void radixSort(std::vector<int>& vec) {
    int max = INT32_MIN;
    
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }

    for (int i = 1; max / i > 0; i *= 10) {
        countingSort(vec, i);
    }
}

int main()
{
    std::vector<int> vec{54, 34, 380, 13, 730, 5, 68};

    radixSort(vec);

    for (auto it : vec) {
        std::cout << it << " ";
    }
}

