class Solution {
public:
    unsigned int getReverse(unsigned int n)
    {
        unsigned r = n%10;
        while (n/=10) {
            r = r*10 + n%10;
        }
        return r;
    } 
    
    bool isPalindrome(int x) {
        return x == getReverse(x);
    }
};
