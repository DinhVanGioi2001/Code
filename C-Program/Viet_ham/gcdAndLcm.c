#include<stdio.h>
#define ll long long

ll gcd(ll a, ll b){
    while(a * b != 0){
        if(a > b) a %= b;
        else b %= a;
    }
    return a+b;
}

int main(){
    ll a, b;
    scanf("%lld%lld", &a, &b);
    ll res = gcd(a, b);
    long long res2 = (a * b) / res;
    printf("%lld\n%lld", res, res2);
}