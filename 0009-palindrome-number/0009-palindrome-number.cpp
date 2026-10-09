class Solution {
public:
    bool isPalindrome(int x) {
        // Edge case
        if (x < 0) { 
            return false;
        }
        
        // Find the divisor
        int divisor = 1;
        while (x / divisor >= 10) {
            divisor *= 10;
        }

        // Compare first and last digits
        while (x > 0) {
            int first = x / divisor;
            int last = x % 10;

            if (first != last) {
                return false;
            }

            // Remove both digits
            x = (x % divisor) / 10;
            divisor /= 100;
        }

        return true;
    }
};