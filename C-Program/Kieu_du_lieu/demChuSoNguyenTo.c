#include<stdio.h>
typedef long long ll;

int isPrime(int n){
    if(n < 2) return 0;
    int i;
    for(i = 2; i*i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
}

int main(){
    ll n;
    scanf("%lld", &n);
    int a[10] = {0}, tmp;
    ll tmp2 = 0;
    while(n > 0){
        if(isPrime(tmp = n % 10)){
            a[tmp]++;
        }
        n /= 10;
        tmp2 = tmp2 * 10 + tmp;
    }
    while(tmp2 > 0){
        tmp = tmp2 % 10;
        tmp2 /= 10;
        if(a[tmp] != 0){
            printf("%d %d\n", tmp, a[tmp]);
            a[tmp] = 0;
        }
    }
}