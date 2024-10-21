#include <bits/stdc++.h>
using namespace std;
using i64 = long long int;
#define endl "\n"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"


int linearSearch(int v, vector<int> a) {
    int i = 0;
    while (i < a.size()) {
        if (a[i] == v)
            return (i);
        i++;
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
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3},
        {1, 4, 4, 3},
        {1, 5, 3},
        {},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1},
        {1}
    };

    vector<int> Target_values = {2, 1, 3, 4, 2, 2, 1, 4, 1, 2};
    vector<int> Expected_outcomes = {1, 0, 2, 1, -1, -1, 0, 3, 0, -1};
    int size = array.size();

    for(int i=0; i<size; i++) {
        assertEqual(Expected_outcomes[i], linearSearch(Target_values[i], array[i]), "Test: " + to_string(i+1));
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    run_tests();
    return 0;
}
