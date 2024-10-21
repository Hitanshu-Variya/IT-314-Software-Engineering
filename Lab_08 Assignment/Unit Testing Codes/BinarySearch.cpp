#include <bits/stdc++.h>
using namespace std;
using i64 = long long int;
#define endl "\n"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

int binarySearch(int v, vector<int> a) {
    int lo, mid, hi;
    lo = 0;
    hi = a.size()-1;
    while (lo <= hi) { 
        mid = (lo + hi) / 2;

        if (v == a[mid])
            return (mid);
        else if (v < a[mid])
            hi = mid-1;
        else
            lo = mid+1;
    }

    return (-1);
}

void assertEqual(int expected, int actual, const std::string& testName) {
    if (expected == actual) {
        std::cout << GREEN << testName << ": Passed" << RESET << endl;
    } else {
        std::cout << RED << testName << ": Failed (Expected " << expected << ", got " << actual << ")" << RESET << endl;
    }
}

void run_tests() {
    vector<vector<int>> array = {
        {1, 2, 3, 4, 5},
        {1, 2, 4, 4, 5},
        {5, 6, 7, 8, 9},
        {1, 2, 3, 4, 5},
        {},
        {1, 2, 3},
        {1, 2, 3, 4, 5},
        {1, 2, 3},
        {4, 5, 6},
        {1}, 
        {1}
    };

    vector<int> Target_values = {3, 2, 8, 10, 5, 1, 5, 0, 7, 1, 10};
    vector<int> Expected_outcomes = {2, 1, 3, -1, -1, 0, 4, -1, -1, 0, -1};
    int size = array.size();

    for(int i=0; i<size; i++) {
        assertEqual(Expected_outcomes[i], binarySearch(Target_values[i], array[i]), "Test: " + to_string(i+1));
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    run_tests();
    return 0;
}
