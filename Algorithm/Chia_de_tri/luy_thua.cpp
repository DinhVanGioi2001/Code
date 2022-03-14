#include<iostream>
#include<cmath>
typedef long long ll;
const ll p = 1000000007;

ll mul(ll a, ll b){
    if(b == 0) return 0;
    ll tmp = mul(a, b/2);
    if(b%2==1) return (tmp*2+a)%p;
    return tmp*2%p;
}

ll solution(ll n, ll k){
    if(k == 0) return 1;
    if(k == 1) return n%p;
    ll tmp = solution(n, k/2);
    ll a = mul(tmp, tmp);
    if(k%2 == 1) return a*n%p;
    return a%p;
}
/* 
    VD: 2^8
            2 8 a = 16*16 = 256
        2 4 a = 4*4 =16 ==> tmp = 16
    2 2 a = 2*2 = 4 ==> tmp = 4
2 1 ::: tmp = solution(2,1) ==> tmp = 2;
*/
int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n, k;
        std::cin >> n >> k;
        std::cout << solution(n, k) << std::endl;
    }
}
// #include <bits/stdc++.h>
// #define p 1000000007

// using namespace std;
// long long Power(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     if (b % 2 == 0)
//     {
//         return (Power(a, b / 2) % p) * (Power(a, b / 2) % p) % p;
//     }
//     else
//         return (a % p * Power(a, b / 2) % p * Power(a, b / 2) % p) % p;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, a;
//         cin >> a >> n;
//         cout << Power(a, n)<<endl;
//     }
// }