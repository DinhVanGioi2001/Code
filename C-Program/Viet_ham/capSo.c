#include<stdio.h>
#define ll long long

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
        ll a, b, c, d;
        scanf("%lld%lld%lld%lld", &a, &b, &c, &d); 
        int res1 = gcd(a, b);
        int res2 = gcd(c, d);
        if(res1 == res2) printf("YES\n");
        else printf("NO\n");
    }
}