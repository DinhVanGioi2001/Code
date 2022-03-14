#include<stdio.h>

int giaiThua(int n){
    int gt = 1, i;
    for(i = 1; i <= n; i++)
        gt *= i;
    return gt;
}

int main(){
    int a, b, min, max;
    scanf("%d%d", &a, &b);
    int i;
    if(a > b) max = a, min = b;
    else min = a, max = b;
    for(i = min; i <= max; i++){
        int tmp = i, sum = 0;
        while(tmp > 0){
            sum += giaiThua(tmp % 10);
            tmp /= 10;
        }
        if(sum == i) printf("%d ", i);
    }
}