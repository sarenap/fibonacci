#include <iostream>
#include <vector>

using namespace std;

int fib(int num, vector<int>& cache); // Function declaration

int main() {
    int num = 9;
    vector<int> cache(num + 1, -1); // Initialize cache with -1.

    int result = fib(num, cache);
    cout << result << endl;
    return 0;
}

int fib(int num, vector<int>& cache) { // Function definition
    if (num <= 1) {
        cache[num] = num;
        return num;
    }
    if (cache[num] != -1) {
        // If value already calculated, use it; don't recalculate.
        return cache[num];
    } else {
        // Calculate result, update cache with the result, and return the result.
        int result = fib(num - 1, cache) + fib(num - 2, cache);
        cache[num] = result;
        return result;
    }
}
