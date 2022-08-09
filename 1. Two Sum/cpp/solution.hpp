#pragma once

#include <map>
#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> buffer_values;   // [to_find_value, current_value]
        std::map<int, int> indexes;         // [current_value, index]
        
        const size_t& size = nums.size();

        for (size_t i = 0u; i < size; ++i)
        {
            const auto& current = nums.at(i);
            if (buffer_values.count(current) == 0u)
            {
                buffer_values[target - current] = current;
                indexes[current] = i;
            }
            else
            {
                return {indexes.at(buffer_values.at(current)), static_cast<int>(i)};
            }
        }
        // Never reach
        return {0, 0};
    }
};