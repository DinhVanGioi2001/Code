#include<stdio.h>

int soThuanNghich(int n){
    int sum = 0, tmp = n;
    while(n > 0){
        int tmp = n % 10;
        sum = sum * 10 + tmp;
        n /= 10;
        if(tmp == 9) return 0;
    }
    if(sum == tmp) return 1;
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int i, count = 0;
    for(i = 2; i <= n; i++)
        if(soThuanNghich(i)){
            printf("%d ", i);
            count++;
        }
    printf("\n%d", count);
}