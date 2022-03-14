#include<stdio.h>

long long gcd(long long n, long long m){
    long long tmp;
    while(m != 0){
        tmp = n % m;
        n = m;
        m = tmp;
    }
    return n;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long long n;
        scanf("%lld", &n);
        int i;
        long long res = 1;
        for(i = 2; i <=n; i++){
            res = (res*i)/gcd(res, i);
        }
        printf("%lld\n", res);
    }
}