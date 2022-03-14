#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long long n;
        scanf("%lld", &n);
        double a = 1/(double)n;
        printf("%.15lf\n", a);
    }
}