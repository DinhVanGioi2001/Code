#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long

ll isPrime(ll n){
    if (n < 2) 
        return 0; 
    if (n <= 3) 
        return 1; 
 
    if (n % 2 == 0 || n % 3 == 0) 
        return 0; 
    ll i;
    for (i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0; 
  
    return 1; 
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        ll l, r;
        scanf("%lld%lld", &l, &r);
        ll count = 0; ll i;
        for(i = l; i <= sqrt(r); i++){
            if(isPrime(i)) count++;
        }
        printf("%lld\n", count);
    }
}