#include <string>
#include <algorithm> 
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false; 
        }

        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        transform(t.begin(), t.end(), t.begin(), ::tolower);

        int count[26] = {0}; 

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++; 
            count[t[i] - 'a']--; 
        }

        
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false; 
            }
        }

        return true; 
    }
};

