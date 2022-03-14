#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    double sum;
    int i;
    sum = 1;
    for(i = 2; i <= n; i++)
        sum += 1.0/i;
    printf("%.4lf", sum);
}