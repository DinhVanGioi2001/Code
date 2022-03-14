#include<iostream>
long long dp[1005][1005];
const long long mod = 1e9+7;
/* 
    ADCT: nCk = n-1Ck + n-1Ck-1
*/
int main(){
    int test;
    std::cin >> test;
    for(int i = 0; i <= 1000; i++)
        for(int j = 0; j <= i; j++){
            if(i == j || j == 0) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            dp[i][j] %= mod;
        }
    while(test--){
        int n, k;
        std::cin >> n >> k;
        std::cout << dp[n][k] << '\n';
    }
    return 0;
}