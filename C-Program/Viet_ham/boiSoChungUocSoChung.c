#include<stdio.h>
typedef long long ll;

ll gcd(ll a, ll b){
    while(a * b != 0)
        if(a > b) a %= b;
        else b %= a;
    return a + b;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        ll a, b;
        scanf("%lld%lld", &a, &b);
        ll res1 = gcd(a, b);
        ll res2 = (a * b) / res1;
        printf("%lld %lld\n", res2, res1);
    }
}