#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long long n, sum = 0;
        scanf("%ld", &n);
        while(n > 0){
            int tmp = n % 10;
            n /= 10;
            sum += tmp;
        }
        printf("%lld\n", sum);
    }
}