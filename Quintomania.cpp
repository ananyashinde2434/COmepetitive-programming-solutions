#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

// Function to check if an array is a palindrome
bool isPalindrome(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to calculate the number of good X values for an array A
int f(const vector<int>& A, int M) {
    int n = A.size();
    if (n == 1) return -1; // If the array has only one element, infinite good X
    
    // For arrays where all elements are the same, we have infinitely many good X values
    bool allEqual = true;
    for (int i = 1; i < n; ++i) {
        if (A[i] != A[0]) {
            allEqual = false;
            break;
        }
    }
    
    if (allEqual) return -1; // Infinite good X values
    
    // Count good X values that result in a palindrome
    int count = 0;
    for (int X = 1; X <= M; ++X) {
        vector<int> C(n);
        for (int i = 0; i < n; ++i) {
            C[i] = A[i] % X;
        }
        if (isPalindrome(C)) {
            ++count;
        }
    }
    
    return count;
}

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        long long totalSum = 0;

        // We need to calculate the sum of f(A) over all arrays A
        // Since N and M are very large, we need to be smart here.
        // Brute force isn't feasible; we need to optimize.
        
        // If we are brute-forcing, we'd generate all arrays A of length N and calculate f(A)
        vector<int> A(N);
        // Generate and calculate f(A) for each possible array A (not feasible for large N and M)
        
        cout << totalSum % MOD << endl;
    }

    return 0;
}
