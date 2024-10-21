#include <bits/stdc++.h>
using namespace std;
using i64 = long long int;
#define endl "\n"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

bool prefix(string &s1, string &s2) { 
    if (s1.size() > s2.size()) 
        return false;  
    for (int i = 0; i < s1.size(); i++) { 
        if (s1[i] != s2[i]) 
            return false; 
    }

    return true; 
}


void assertEqual(int expected, int actual, const std::string& testName) {
    if (expected == actual) {
        std::cout << GREEN << testName << ": Passed" << RESET << endl;
    } else {
        std::cout << RED << testName << ": Failed (Expected " << expected << ", got " << actual << ")" << RESET << endl;
    }
}

void run_tests() {
    vector<vector<string>> array = {
        {"hello", "hello world"},
        {"world", "hello world"},
        {"", ""},
        {"hello world", "hello"},
        {"", ""},
        {"hello", "hello"},
        {"hello worl", "hello world"},
        {"hello world!", "hello world"},
        {"IIIIIIIIIIIIIIIIIIII", "IIIIIIIIIIIIIIIIIIII"},
        {"IIIIIIII", "IIIIIIIIIIIIIIIIIIII"}
    };

    vector<bool> Expected_outcomes = {true, false, true, false, true, true, true, false, true, true};
    int size = array.size();

    for(int i=0; i<size; i++) {
        assertEqual(Expected_outcomes[i], prefix(array[i][0], array[i][1]), "Test: " + to_string(i+1));
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    run_tests();
    return 0;
}
