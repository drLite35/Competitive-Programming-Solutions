#include <iostream>
#include <vector>

bool isUniqueArrangementPossible(const std::vector<int>& uniqueNumbers) {
    int size = uniqueNumbers.size();
    std::vector<int> count(size + 1, 0);

    for (int num : uniqueNumbers) {
        if (num > size) {
            return false;
        }
        count[num]++;
        if (count[num] > num) {
            return false;
        }
    }

    for (int i = 1; i <= size; i++) {
        if (count[i] != count[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testCases;
    std::cin >> testCases;

    while (testCases--) {
        int size;
        std::cin >> size;
        std::vector<int> uniqueNumbers(size);

        for (int i = 0; i < size; i++) {
            std::cin >> uniqueNumbers[i];
        }

        bool isPossible = isUniqueArrangementPossible(uniqueNumbers);
        std::cout << (isPossible ? "YES" : "NO") << std::endl;
    }

    return 0;
}
