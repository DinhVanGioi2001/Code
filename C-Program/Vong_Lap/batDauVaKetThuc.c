#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long n;
        scanf("%ld", &n);
        int tmp1 = n % 10;
        while(n > 0){
            int tmp2 = n % 10;
            n/= 10;
            if(n <= 0){
                if(tmp1 == tmp2){
                    printf("YES\n");
                }else printf("NO\n");
            }
        }
    }
}