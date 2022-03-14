#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n, i;
        scanf("%d", &n);
        int sub = 1, count;
        for(i = 2; i <= n; i++){
            count = 0;
            while(n % i == 0){
                count++;
                n /= i;
            }
            if(count != 0)
                sub *= i;
        }
        printf("%d\n", sub);
    }
}