#include<stdio.h>

int main(){
    long int n;
    scanf("%ld", &n);
    long int sum = 1;
    while(n > 0){
        int tmp = n % 10;
        n /= 10;
        sum *= tmp;
    }
    printf("%ld", sum);
}