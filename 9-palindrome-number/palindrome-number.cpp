class Solution {
public:
    bool isPalindrome(int n) 
    {
        long original = n;
        long count = 0;
        int a;
        while(n > 0)
        {
            a = n % 10;
            count = (count * 10) + a;
            n = n / 10;
        }
        return (count == original);
    }
};
