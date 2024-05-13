class Solution {
public:
    int trailingZeroes(int n) {
        int i = 5;
        int cnt = 0;

        while ((n / i) > 0) {
            cnt += n / i;
            i *= 5;
        }
        return cnt;
    }
};