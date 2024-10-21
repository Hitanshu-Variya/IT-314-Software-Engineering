#include <bits/stdc++.h>
using namespace std;
using i64 = long long int;
#define endl "\n"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

const int EQUILATERAL = 0; 
const int ISOSCELES = 1; 
const int SCALENE = 2; 
const int INVALID = 3; 

int triangle(int a, int b, int c) { 
    if(a >= b + c || b >= a + c || c >= a + b || a <= 0 || b <= 0 || c <= 0) 
        return INVALID; 
    if(a == b && b == c) 
        return EQUILATERAL; 
    if(a == b || a == c || b == c) 
        return ISOSCELES;
    return SCALENE; 
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
        {5, 5, 5},
        {5, 5, 3},
        {3, 4, 5},
        {1, 2, 3},
        {1, 1, 3},
        {1, 1, 1},
        {2, 2, 1},
        {3, 4, 5},
        {3, 4, 6},
        {3, 4, 7},
        {0, 1, 1},
        {-1, 1, 1}
    };

    vector<int> Expected_outcomes = {0, 1, 2, 3, 3, 0, 1, 2, 2, 3, 3, 3};
    int size = array.size();

    for(int i=0; i<size; i++) {
        assertEqual(Expected_outcomes[i], triangle(array[i][0], array[i][1], array[i][2]), "Test: " + to_string(i+1));
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    run_tests();
    return 0;
}
