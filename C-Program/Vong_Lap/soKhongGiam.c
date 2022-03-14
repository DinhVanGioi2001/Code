#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long long int n;
        scanf("%lld", &n);
        int res = 0;
        while( n > 0){
            int tmp1 = n % 10;
            n /=10;
            int tmp2 = n % 10;
            if(tmp1 < tmp2){
                res++;
                printf("NO\n");
                break;
            }
        }
        if(res == 0) printf("YES\n");
    }
}