#include<stdio.h>


int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long int n, i = 2;
        scanf("%ld", &n);
        while(n > 1){
            if(n % i == 0){
                printf("%ld ", i);
                n /= i;
            }else i++;
        }
        printf("\n");
    }
}