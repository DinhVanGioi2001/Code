#include<iostream>
typedef long long ll;

ll solution(ll a[], ll n, ll x){
    ll len = n/2;
    ll tmp;
    if(x > a[n] || x < a[1]) return -1;
    if(a[len] == x) return len;
    if(a[len] < x){
        for(int i = len; i <= n; i++){
            if(x >= a[i]) tmp = i;
        }
        return tmp;
    }else{
        for(int i = 1; i < len; i++){
            if(x >= a[i]) tmp = i;
        }
        return tmp;
    }
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n, x;
        std::cin >> n >> x;
        ll a[n+2];
        for(int i = 1; i <= n ; i++) std::cin >> a[i];
        std::cout << solution(a, n, x) << std::endl;
    }
}