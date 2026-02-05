class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0) return false;
        if (n < 10) return true;
        
        int original = n;
        int reversed = 0;
        
        while (n > 0) {
            int digit = n % 10;
            if (reversed > INT_MAX /10) {
                return original == reversed;
            }
            reversed = reversed * 10 + digit;
            n /= 10;
        }
        
        return original == reversed;
    }
};