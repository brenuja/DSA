class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        return checkPalindrome(cleaned, 0, cleaned.size() - 1);
    }

private:
    bool checkPalindrome(const string& s, int left, int right) {
        if (left >= right) return true;
        if (s[left] != s[right]) return false;
        return checkPalindrome(s, left + 1, right - 1);
    }
};
