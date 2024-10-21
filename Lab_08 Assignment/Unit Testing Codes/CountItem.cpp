#include <bits/stdc++.h>
using namespace std;
using i64 = long long int;
#define endl "\n"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

int countItem(int v, vector<int> a) {
    int count = 0;
    for (int i=0; i<a.size(); i++) {
        if (a[i] == v)
            count++;
    }

    return (count);
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
        {1, 2, 2, 3, 2},
        {4, 4, 1, 2, 4, 4, 3},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 5},
        {1, 2, 3, 4, 5},
        {},
        {1, 2, 3},
        {1, 2, 3, 4, 5},
        {1, 2, 3},
        {4, 5, 6},
        {5, 5, 5, 5, 5, 5}
    };

    vector<int> Target_values = {2, 4, 3, 5, 7, 5, 1, 4, 0, 7, 5};
    vector<int> Expected_outcomes = {3, 4, 1, 1, 0, 0, 1, 1, 0, 0, 6};
    int size = array.size();

    for(int i=0; i<size; i++) {
        assertEqual(Expected_outcomes[i], countItem(Target_values[i], array[i]), "Test: " + to_string(i+1));
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    run_tests();
    return 0;
}
