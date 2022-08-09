#pragma once

#include <iostream>
#include <string>
#include <map>

using namespace std;


map<int, string> dict = {
    {1, "I"},
    {4, "IV"},
    {5, "V"},
    {9, "IX"},
    {10, "X"},
    {40, "XL"},
    {50, "L"},
    {90, "XC"},
    {100, "C"},
    {400, "CD"},
    {500, "D"},
    {900, "CM"},
    {1000, "M"}
};

const int MAX_STRING_SIZE = 9;

class Solution {
public:
    string intToRoman(int num) {
        string res = "";
        res.reserve(MAX_STRING_SIZE);
        
        int n = 1000;
        int digit;
        do {    // go through digits
            digit = num / n;
            if (digit == 0) { // no digit in n position
                n /= 10;
                continue;
            }
            
            if (dict.count(digit * n)) {    // All dificult
                res += string(dict[digit*n]);
            }
            else {  // Just add 1, 10, 100, 1000 (OR)    
                int offset = (digit >= 5) ? (5) : (0);
                res +=  (offset != 0) ? (string(dict[n*5])) : ("");
                for (int i = 0; i < digit - offset; ++i) {
                    res += string(dict[n]);
                }
            }
            // Next num
            num %= n;
            n /= 10;
        } while (n / 10);
                
        // last number
        if (dict.count(num)) {    // All dificult
            res += string(dict[num]);
        }
        else {  // Just add    
            int offset = (num >= 5) ? (5) : (0);
            res +=  (offset != 0) ? (string(dict[n*5])) : ("");
            for (int i = 0; i < num - offset; ++i) {
                res += string(dict[1]);
            }
        }
        
        return res;
    }    
};
