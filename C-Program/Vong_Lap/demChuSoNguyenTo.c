#include<stdio.h>

long isPrime(long n){
    if(n < 2) return 0;
    if(n<= 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    long i;
    for(i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i+2) == 0)
            return 0;
    }
    return 1;
}
int main(){
    long n;
    scanf("%ld", &n);
    long sum = 0;
    int tmp, a[9] = {0};
    while(n > 0){
        tmp = n % 10;
        if(isPrime(tmp)){
            a[tmp]++;
            sum = sum*10 + tmp;
        }
        n /= 10;
    }
    while(sum > 0){
        tmp = sum % 10;
        if(a[tmp] != 0){
            printf("%ld %ld\n", tmp, a[tmp]);
            a[tmp] = 0;
        }
        sum /= 10;
    }
}