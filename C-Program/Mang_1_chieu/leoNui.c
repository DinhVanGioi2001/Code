#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int sumUp = 0, sumDown = 0, a, b, i;
    int minUp = 50005, minDown = 50005;
    for(i = 1; i <= n; i++){
        scanf("%d%d", &a, &b);
        sumUp += a;
        sumDown += b;
        if(a < minUp) minUp = a;
        if(b < minDown) minDown = b;
    }
    sumUp += minDown;
    sumDown += minUp;
    if(sumUp < sumDown) printf("%d", sumDown);
    else printf("%d", sumUp);
}