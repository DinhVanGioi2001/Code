#include<stdio.h>

int main(){
    int a, b, min, max;
    scanf("%d%d", &a, &b);
    if(a > b){ 
        max = a; min = b;
    }else{
        min = a, max = b;
    }
    int i; long long int sum = 0;
    for(i = min; i <= max; i++) sum += i;
    printf("%lld", sum);
}