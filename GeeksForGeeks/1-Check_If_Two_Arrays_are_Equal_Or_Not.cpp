#include <algorithm>
#include <vector>

bool check(std::vector<long long>& A, std::vector<long long>& B) {
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());

    int N = A.size();
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) return false;
    }

    return true;
}

