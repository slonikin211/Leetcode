#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

#include "solution.hpp"


void test1() {
    Solution s;
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    vector<int> output{0, 1};

    vector<int> result = s.twoSum(nums, target);
    assert(result == output);
    std::cout << "Test 1 passed\n";
}

void test2() {
    Solution s;
    vector<int> nums{3, 2, 4};
    int target = 6;
    vector<int> output {1, 2};

    vector<int> result = s.twoSum(nums, target);
    assert(result == output);
    std::cout << "Test 2 passed\n";
}

void test3() {
    Solution s;
    vector<int> nums{3, 3};
    int target = 6;
    vector<int> output{0, 1};

    vector<int> result = s.twoSum(nums, target);
    assert(result == output);
    std::cout << "Test 3 passed\n";
}

int main() {
    test1();
    test2();
    test3();
    return 0;
}