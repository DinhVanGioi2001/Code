#include<stdio.h>

int giaiThua(int n){
    int gt = 1, i;
    for(i = 1; i <= n; i++)
        gt *= i;
    return gt;
}

int main(){
    int n;
    scanf("%d", &n);
    int i;
    for(i = 1; i < n; i++){
        int tmp = i, sum = 0;
        while(tmp > 0){
            sum += giaiThua(tmp % 10);
            tmp /= 10;
        }
        if(sum == i) printf("%d ", i);
    }
}