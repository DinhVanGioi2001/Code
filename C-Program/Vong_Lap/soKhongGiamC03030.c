#include<stdio.h>
#include<math.h>

long check(long n){
    int a = n % 10;
    n /= 10;
    while(n > 0){
        int b = n % 10;
        if(b > a) return 0;
        n /= 10;
        a = b;
    }
    return 1;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a = pow(10, n-1), b = pow(10, n);
        long i;
        for(i = a; i < b; i++){
            if(check(i)) printf("%d ", i);
        }
        printf("\n");
    }
}