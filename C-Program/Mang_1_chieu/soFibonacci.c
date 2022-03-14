#include<stdio.h>

long long fibonacci(int n){
    if(n == 2 || n == 1) return 1;
    long long a1 = 1, a2 = 1;
    long long i = 3, a;
    while(i <= n){
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        printf("%lld\n", fibonacci(n));
    }
}