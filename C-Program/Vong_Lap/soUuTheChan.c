#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long long n;
        scanf("%lld", &n);
        long le = 0, chan = 0;
        while(n > 0){
            int tmp = n % 10;
            n /= 10;
            if(tmp % 2 == 0) chan++;
            else le++;
        }
        if(chan > le) printf("YES\n");
        else printf("NO\n");
    }
}