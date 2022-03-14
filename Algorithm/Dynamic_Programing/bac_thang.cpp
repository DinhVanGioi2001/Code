#include<iostream>
const long long mod = 1e9+7;
/* 
    voi so buoc toi da la 2
    vd: 1 bac => 1 cach leo len
        2 bac => 2 cach leo len
        3 bac => (111)(12)(21) => 3 cach leo len
        4 bac (1111)(112)(121)(211)(22) => co  5 cach leo len
        ==>> CTTQ: dp(n) = dp(n-1)+dp(n-2)+...+dp(n-k);
*/
int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, k;
        std::cin >> n >> k;
        int dp[n+5] = {0};
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; i++)
            for(int j = 1; j <= std::min(i, k); j++){
                dp[i] += dp[i-j];
                dp[i] %= mod;
            }
        std::cout << dp[n] << '\n';
    }
}