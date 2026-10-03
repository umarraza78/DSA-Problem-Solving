
class Solution {
public:
    int firstUniqChar(string s) {
        
        int freq[256] = {0};

        // Counting frequency
        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++;
            //here c++ converts the char like s to 115 ascii and then count those frequencies)
        }

        // Find first non-repeating character
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};
