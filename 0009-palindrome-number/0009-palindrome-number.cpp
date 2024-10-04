class Solution {
public:
    bool isPalindrome(int x) 
    {
        // If x is negative, it cannot be a palindrome
        if (x < 0) return false;
        
        // Save the original value of x
        int original = x;
        int rev = 0;
        
        // Reverse the integer
        while (x != 0) {
            int n = x % 10;
            if (rev > (INT_MAX / 10) || (rev == INT_MAX / 10 && n > 7)) {
                return false;  // It will overflow, so it's not a palindrome
            }
            rev =(rev * 10) + n;
            x = x / 10;
        }
        
        // Compare the reversed number with the original
        return rev == original;
    }
};
