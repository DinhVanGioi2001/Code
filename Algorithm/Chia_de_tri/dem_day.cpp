/* 
    Vd: 1: 1 => co 1 day so
        2: 11; 2 => co 2 day so
        3: 111; 12; 21; 3 => co 4 day so
        4: 1111; 112; 121; 211; 22; 13; 31; 4 => co 8 day so
    ===> cong thuc tong quat la: 2^(n-1).
*/
#include<iostream>
#include<cmath>
typedef long long ll;
#define mod 123456789

ll solution(ll n){
    if(n == 1) return 2;
    ll tmp = solution(n/2);
    if(n%2) return 2*(tmp%mod*tmp%mod)%mod;
    return (tmp%mod*tmp%mod)%mod;
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n;
        std::cin >> n;
        n -= 1;
        std::cout << solution(n) << std::endl;
    }
}