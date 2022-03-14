#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int tmp1 = n, sum = 0, tmp2;
    while(tmp1 > 0){
        tmp2 = tmp1 % 10;
        tmp1 /= 10;
        int i, sum2 = 1;
        for(i = 2; i <= tmp2; i++)
            sum2 *= i;
        sum += sum2;
    }
    if(sum == n) printf("1");
    else printf("0");
}