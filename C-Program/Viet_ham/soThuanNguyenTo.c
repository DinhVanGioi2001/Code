#include<stdio.h>
typedef long long ll;

ll isPrime(ll n){
    if(n < 2) return 0;
    if(n <= 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    ll i;
    for(i = 5; i*i <= n; i += 6)
        if(n % i == 0 || n % (i + 2) == 0) return 0;
    return 1; 
}
ll check(ll n){
    ll sum = 0, tmp;
    while(n > 0){
        tmp = n % 10;
        if(tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7) return 0;
        sum += tmp;
        n /= 10;
    }
    if(isPrime(sum)) return 1;
    return 0;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        ll n, m;
        scanf("%lld%lld", &n, &m);
        ll i, count = 0;
        for(i = n; i <= m; i++){
            if(check(i)){
                if(isPrime(i)) count++;
            }
        }
        printf("%lld\n", count);
    }
}