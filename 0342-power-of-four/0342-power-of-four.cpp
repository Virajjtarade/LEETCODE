class Solution {
public:
    bool isPowerOfFour(int n) {
         if (n == 1) return true;
        if (n <= 0 || n % 4 != 0) return false;
        return isPowerOfFour(n / 4);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna