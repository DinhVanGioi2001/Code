#include<iostream>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n;
        std::cin >> n;
        int a[n+5];
        for(int i = 0; i < n; i++) std::cin >> a[i];
        int dp[1005], res = 0;
        for(int i = 0; i < n; i++){
            dp[i] = 1;
            for(int j = 0; j < i; j++){
                if(a[i] >= a[j])
                    dp[i] = std::max(dp[i], dp[j] + 1);
                res = std::max(res, dp[i]);
            }
        }
        std::cout << n-res << '\n';
    }
}