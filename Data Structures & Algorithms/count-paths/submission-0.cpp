class Solution {
public:
    int uniquePaths(int m, int n) {
        long long result = combFunc(m + n - 2, m - 1);
        return result;
    }

long long combFunc(int n,int k)
{
    if (k < 0 || k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n / 2) k = n - k;

    long long result = 1;
    for (int i = 1; i <= k; ++i) {
        result = result * (n - i + 1) / i;
    }
    return result;

}

};
