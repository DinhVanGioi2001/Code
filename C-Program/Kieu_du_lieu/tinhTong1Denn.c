#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        long a, i;
        scanf("%ld", &a);
        long long sum = 0;
        sum = (a*(a + 1))/2;
        printf("%lld\n", sum);
    }
}