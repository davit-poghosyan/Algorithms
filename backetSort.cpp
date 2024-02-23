#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

void bucketSort(std::vector<float>& vec)
{
    int size = vec.size();

    std::vector<std::vector<float>> bucket(size);

    for (int i = 0; i < size; ++i) {
        int buc_index = vec[i] * size;
        bucket[buc_index].push_back(vec[i]);
    }

    for (int i = 0; i < size; ++i) {
        std::sort(bucket[i].begin(), bucket[i].end());
    }

    int index = 0;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < bucket[i].size(); ++j) {
            vec[index++] = bucket[i][j];
        }
    }
}

int main()
{
    std::vector<float> vec{0.53, 0.34, 0.0023,0.78, 0.234, 0.94};

    bucketSort(vec);

    for (auto it : vec) {
        std::cout << it << " ";
    }
}

