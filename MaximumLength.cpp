class Solution {
public:
    int solve(int a, int b, int c) {
        if (a <= 2*(b+c) && b <= 2*(c+a) && c <= 2*(a+b))
            return a+b+c;
        return -1;
    }
};
