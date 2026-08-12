class Solution {
public:
    int countDigitOne(int n) {
        int cnt = 0, k, a;
        k = n;
        
        
        if (n <= 0) 
            return 0;
            
        
        while (k > 0) {
            a = k % 10;
            if (a == 1) {
                cnt++;
            }
            k = k / 10;
        }

        return cnt + countDigitOne(n - 1); 
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna