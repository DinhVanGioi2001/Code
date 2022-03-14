#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0, i;
    for(i = 1; i <= n/2; i++)
        if(n % i == 0) sum += i;
    if(sum == n) printf("1");
    else printf("0");
}