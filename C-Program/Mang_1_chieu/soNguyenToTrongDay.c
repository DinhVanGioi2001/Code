#include<stdio.h>
#include<math.h>

int isPrime(int n){
    int i;
    if(n < 2) return 0;
    for(i = 2; i <= sqrt(n); i++) 
        if(n % i == 0) return 0;
    return 1;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a[n], i;
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        for(i = 0; i < n; i++){
            if(isPrime(a[i])) printf("%d ", a[i]);
        }
        printf("\n");
    }
}