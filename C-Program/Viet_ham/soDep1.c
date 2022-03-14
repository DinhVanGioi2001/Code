#include<stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    if(n <= 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    int i;
    for(i = 5; i * i <= n; i+=6)
        if(n % i == 0 || n % (i + 2) == 0) return 0;
    return 1;
}
int isFibonaci(int n){
    int t = 0;
    while(n > 0){
        t += n % 10;
        n /= 10;
    }
    int f1 = 0, f2 = 1, fi = 1;
    while(fi <= t){
        fi = f1 + f2;
        f1 = f2;
        f2 = fi;
        if(fi == t) return 1;
    }
    return 0;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int i, min, max;
    if(a > b)
        max = a, min = b;
    else min = a, max = b;
    for(i = min; i<= max; i++)
        if(isPrime(i) && isFibonaci(i))
            printf("%d ", i);
}