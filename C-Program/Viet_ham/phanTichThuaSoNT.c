#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int i;
        printf("%d = ", n);
        for(i = 2; i <= n; i++){
            int count = 0;
            while(n % i == 0){
                count++;
                n /= i;
            }
            if(count){
                printf("%d^%d", i, count);
                if(n > i) printf(" * ");
            }
        }
        printf("\n");
    }
}