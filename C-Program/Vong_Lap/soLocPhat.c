#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long n;
        scanf("%ld", &n);
        int tmp = 0, sum = 0;
        while(n > 0){
            tmp = n % 10;
            n /= 10;
            if(tmp != 0 && tmp != 6 && tmp != 8)
                sum++;
        }
        if(sum == 0)
            printf("YES\n");
        else printf("NO\n");
    }
}