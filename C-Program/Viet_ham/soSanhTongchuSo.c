#include<stdio.h>

int sumNumber(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int res1 = sumNumber(a);
    int res2 = sumNumber(b);
    if(res1 > res2)printf("%d %d", b, a);
    else printf("%d %d", a, b);
}