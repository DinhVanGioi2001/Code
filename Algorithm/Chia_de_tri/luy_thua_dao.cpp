#include<iostream>
typedef long long ll;
const ll mod = 1000000007;

ll solution(ll n, ll r){
    if(r == 1) return n%mod;
    ll tmp = solution(n, r/2);
    if(r % 2) return (tmp * tmp % mod) * n % mod;
    return tmp*tmp % mod;
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n;
        std::cin >> n; 
        ll r =0, a = n;
        while(a > 0){
            int tmp = a % 10;
            r = r*10 + tmp;
            a /= 10;
        }
        std::cout << solution(n, r) << std::endl;
    }
}