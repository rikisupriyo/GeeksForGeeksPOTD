class Solution {
public:
    int solve(int a, int b, int c) {
        if (a <= 2*(b+c+1) && b <= 2*(c+a+1) && c <= 2*(a+b+1))
            return a+b+c;
        return -1;
    }
};
