class Solution {
public:
    string toLowerCase(string s) {
        int i;
        for(i = 0; s[i] != '\0'; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }

        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna