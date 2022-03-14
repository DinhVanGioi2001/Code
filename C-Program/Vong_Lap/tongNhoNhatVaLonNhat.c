#include<stdio.h>
#define ll long long

ll solution(ll x, ll n, ll m){
    ll result = 0, mul = 1;
    while(x > 0){
        int tmp = x % 10;
        if(tmp == n)
            result = result + m*mul;
        else result = result + tmp*mul;
        mul *= 10;
        x /= 10;
    }
    return result;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        ll x1, x2;
        scanf("%lld%lld", &x1, &x2);
        ll min = solution(x1, 6, 5) + solution(x2, 6, 5);
        ll max = solution(x1, 5, 6) + solution(x2, 5, 6);
        printf("%lld %lld\n", min, max);
    }
}