#include<stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    if(n <= 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    int i;
    for(i = 5; i * i <= n; i+= 6)
        if(n % i == 0 || n % (i + 2) == 0) return 0;
    return 1;
}
int check(int n){
    while(n > 0){
        int tmp = n % 10;
        if(isPrime(tmp) == 0) return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int a, b, i, j, count = 0;
        scanf("%d%d", &a, &b);
        for(i = a; i <= b; i++)
            if(isPrime(i) && check(i))
                count++;
        printf("%d\n", count);
    }
}