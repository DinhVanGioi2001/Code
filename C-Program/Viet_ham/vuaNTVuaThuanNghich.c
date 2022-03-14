#include<stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    if(n <= 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    int i;
    for(i = 5; i * i <= n; i++)
        if(n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}
int soThuanNghich(int n){
    int sum = 0;
    int tmp = n;
    while(n > 0){
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    if(sum == tmp) return 1;
    else return 0;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int a, b;
        scanf("%d%d", &a, &b);
        int i, count = 1;
        for(i = a; i <= b; i++)
            if(isPrime(i) && soThuanNghich(i)){
                if(count % 10 == 0){
                    printf("%d\n", i);
                    count++;
                }else{
                    printf("%d ", i);
                    count++;
                }
            }
        printf("\n");
    }
}