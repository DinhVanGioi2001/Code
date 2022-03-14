#include<iostream>
#include<algorithm>

long Count(int x, int y[], int m, int dp[]){
    if(x == 0) return 0;
    if(x == 1) return dp[0];
    int* tmp = std::upper_bound(y, y + m, x);
    long ans = (y-m) - tmp;
    ans += dp[0] + dp[1];
    if(x == 2) ans -= (dp[3] + dp[4]);
    if(x == 3) ans += dp[2];
    return ans;
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, m;
        std::cin >> n >> m;
        int x[n], y[m], dp[5] = {0};
        for(int i = 0; i < n; i++)
            std::cin >> x[i];
        for(int i = 0; i < m; i++){
            std::cin >> y[i];
            if(y[i] < 5) dp[y[i]]++;
        }
        std::sort(y, y + n);
        long res = 0;
        for(int i = 0; i < n; i++){
            res += Count(x[i], y, m, dp);
        }
        std::cout << res << std::endl;
    }
}
