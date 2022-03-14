/* y tuong bai toan laf chia thanh 2 th de xet
    Th1 la chia thanh 2 mang gom k phan tu dau va n-k phan tu sau
    Th2 la chia thanh n-k phan tu dau va k phan tu sau
*/
#include<iostream>
#include<algorithm>
#include<cmath>

typedef long long ll;

void divArr(ll n, ll k, ll a[]){
    ll sum1 = 0, sum2 = 0, res = 0;
    //th1: chia thanh k phn tu dau va n-k phan tu sau
    for(int i = 0; i < n; i++){
        if(i < k) sum1 += a[i];
        else sum2 += a[i];
    }
    res = std::abs(sum2 - sum1);
    //th2:chia thanh n-k phan tu dau va k phan tu sau
    sum1 = sum2 = 0;
    for(int i = 0; i < n; i++){
        if(i < n - k) sum1 += a[i];
        else sum2 += a[i];
    }
    res = std::max(res, std::abs(sum1-sum2));
    std::cout << res << std::endl;
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n, k;
        std::cin >> n >> k;
        ll a[n];
        for(int i = 0; i < n; i++) std::cin >> a[i];
        std::sort(a, a+n);
        divArr(n, k, a);
    }
    return 0;
}