#include <iostream>

int main()
{
    int test;
    std::cin >> test;
    int count = 1;
    while(test--){
        int dp[1002], n, res = 0;
        std::cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            std::cin >> a[i];
        for (int i = 1; i <= n; i++){
            dp[i] = 1;
            for (int j = 1; j < i; j++){
                if (a[i] > a[j])
                    dp[i] = std::max(dp[i], dp[j] + 1);
                res = std::max(res, dp[i]);
            }
        }
        std::cout <<"Test " << count << ": " << res << "\n";
        count++;
    }
}