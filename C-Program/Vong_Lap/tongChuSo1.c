#include<stdio.h>

int main(){
    long int n;
    scanf("%ld", &n);
    int sum = 0;
    while(n > 0){
        int tmp = n % 10;
        n /= 10;
        sum += tmp;
    }
    printf("%d", sum);
}