#include <string>
#include <cassert>
using namespace std;

#include "solution.hpp"


void test1() {
    Solution s;
    int input = 3;
    string output = "III";

    string result = s.intToRoman(input);
    assert(result == output);
    std::cout << "Test 1 passed\n";
}

void test2() {
    Solution s;
    int input = 58;
    string output = "LVIII";

    string result = s.intToRoman(input);
    assert(result == output);
    std::cout << "Test 2 passed\n";
}

void test3() {
    Solution s;
    int input = 1994;
    string output = "MCMXCIV";

    string result = s.intToRoman(input);
    assert(result == output);
    std::cout << "Test 3 passed\n";
}

int main() {
    test1();
    test2();
    test3();
    return 0;
}