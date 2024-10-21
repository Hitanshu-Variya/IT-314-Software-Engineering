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
const int RIGHT_ANGLED = 3;
const int INVALID = 4; 

int triangle(double a, double b, double c) { 
    if(a >= b + c || b >= a + c || c >= a + b || a <= 0 || b <= 0 || c <= 0) 
        return INVALID; 
    if(a == b && b == c) 
        return EQUILATERAL; 
    if(a == b || a == c || b == c) 
        return ISOSCELES;
    if(a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a) 
        return RIGHT_ANGLED;
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
    vector<vector<double>> array = {
        {5.0, 5.0, 5.0},
        {5.0, 5.0, 3.0},
        {7.0, 10.0, 12.0},
        {3.0, 4.0, 5.0},
        {1.0, 2.0, 3.0},
        {1.0, 1.0, 3.0},
        {3.0, 4.0, 6.0},
        {3.0, 4.0, 7.0},
        {0.0, 1.0, 1.0},
        {-1.0, 1.0, 1.0},
        {7.0, 10.0, 12.0},
        {3.0, 4.0, 6.0},
        {3.0, 4.0, 7.0},
        {2.0, 2.0, 1.0},
        {2.0, 2.0, 2.1},
        {2.0, 2.0, 5.2},
        {1.0, 1.0, 1.0},
        {5.0, 5.0, 5.0},
        {5.0, 5.0, 5.1},
        {3.0, 4.0, 5.0},
        {5.0, 12.0, 13.0},
        {5.0, 12.0, 13.1},
        {3.0, 4.0, 6.0},
        {3.0, 4.0, 8.0},
        {0.0, 4.0, 8.0},
        {0.0, 0.0, 7.0},
        {0.0, 0.0, 0.0},
        {-1.0, 4.0, 8.0},
        {-1.0, -2.0, 8.0},
        {-1.0, -4.0, -8.0},
    };

    vector<int> Expected_outcomes = {0, 1, 2, 3, 4, 4, 2, 4, 4, 4, 2, 2, 4, 1, 1, 4, 0, 0, 1, 3, 3, 2, 2, 4, 4, 4, 4, 4, 4, 4};
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
