#include<iostream>
#include<algorithm>
typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n;
        std::cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++)
            std::cin >> a[i];
        std::sort(a, a+n);
        long long summax = 0;
        for(int i = 0; i < n; i++){
            summax += a[i]*i;
            summax %= 1000000007;
        }
        std::cout << summax << std::endl;
    }
}