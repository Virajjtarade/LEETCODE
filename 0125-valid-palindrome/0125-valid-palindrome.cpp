class Solution {
public:
 
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            // Skip non-alphanumeric characters from left
            while (i < j && !isalnum(s[i]))
                i++;

            // Skip non-alphanumeric characters from right
            while (i < j && !isalnum(s[j]))
                j--;

            // Compare lowercase versions
            if (tolower(s[i]) != tolower(s[j]))
                return false;

            i++;
            j--;
        }

        return true;
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna