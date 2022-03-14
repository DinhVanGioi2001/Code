#include<stdio.h>
#include<limits.h>
#define ll long long

ll maxPrime(ll n){
    ll max = -1;
    while(n % 2 == 0){
        max = 2;
        n /= 2;
    }
    ll i;
    for(i = 3; i*i <= n; i+=2){
        while(n % i == 0){
            max = i;
            n /= i;
        }
    }
    if(n > 2) max = n;
    return max;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        ll n;
        scanf("%lld", &n);
        printf("%lld\n", maxPrime(n));
    }
}