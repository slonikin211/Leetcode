#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

#include "solution.hpp"


void test1() {
    Solution s;
    int x = 121;
    bool output = true;

    bool result = s.getReverse(x);
    assert(result == output);
    std::cout << "Test 1 passed\n";
}

void test2() {
    Solution s;
    int x = -121;
    bool output = false;

    bool result = s.getReverse(x);
    assert(result == output);
    std::cout << "Test 2 passed\n";
}

void test3() {
    Solution s;
    int x = 10;
    bool output = false;

    bool result = s.getReverse(x);
    assert(result == output);
    std::cout << "Test 3 passed\n";
}

int main() {
    test1();
    test2();
    test3();
    return 0;
}