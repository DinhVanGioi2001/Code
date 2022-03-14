#include<stdio.h>
long long isFibonaci(long long n){
    long long f1 = 0, f2 = 1, fi = 1;
    while(fi <= n){
        fi = f1 + f2;
        f1 = f2;
        f2 = fi;
        if(fi == n) return 1;
    }
    return 0;
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld", isFibonaci(n));
}