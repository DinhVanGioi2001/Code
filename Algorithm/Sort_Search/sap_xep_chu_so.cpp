#include<iostream>
typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n, dp[10] = {0};
        std::cin >> n;
        ll a;
        for(int i = 0; i < n; i++){
            std::cin >> a;
            while(a > 0){
                dp[a % 10] = 1;
                a /= 10;
            }
        }
        for(int i = 0; i < 10; i++)
            if(dp[i] != 0)
                std::cout << i << " ";
        std::cout << std::endl;
    }
}