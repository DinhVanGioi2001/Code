#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long int sum = 1, tmp = 0;
    int i;
    for(i = 1; i <= n; i++){
        sum *= i;
        tmp += sum;
    }
    printf("%ld", tmp);
}