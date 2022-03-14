#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long long n, tmp1, tmp2, sum = 0;
        scanf("%lld", &n);
        tmp1 = n;
        while(tmp1 > 0){
            tmp2 = tmp1 % 10;
            sum = sum*10 + tmp2;
            tmp1 /= 10;
        }
        if(sum == n) printf("YES\n");
        else printf("NO\n");
    }
}