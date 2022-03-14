#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long long n, le = 0, chan = 0;
        scanf("%lld", &n);
        while(n > 0){
            int tmp = n % 10;
            n /= 10;
            if(tmp % 2 == 0)
                chan++;
            else le++;
        }
        printf("%lld %lld\n", le, chan);
    }
}