class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        int x= 1;
        int y= 0;
        int a;
        for(int i=2; i<=n; i++){
            a = x + y;
            y = x;
            x = a;
        }
        return a;
    }
};