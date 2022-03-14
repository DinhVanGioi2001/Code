#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int tmp1, tmp2;
    tmp2 = n % 10;
    while(n > 0){
        tmp1 = n %10;
        n /= 10;
    }
    printf("%d %d", tmp1, tmp2);
}