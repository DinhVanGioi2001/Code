#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int tmp1;
    long long res = 0,  sum = n % 10;
    n = n / 10;
    while(n > 0){
        tmp1 = n %10;
        n /= 10;
        if(n > 0) res = res * 10 + tmp1;
    }
    while(res > 0){
        sum = sum*10 + (res % 10);
        res /= 10;
    }
    sum = sum * 10 + tmp1;
    printf("%lld", sum);
}