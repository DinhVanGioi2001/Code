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
    int n;
    scanf("%d", &n);
    int a[n], i, dem = 0;
    int b[n];
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(isPrime(a[i]) == 1){
            dem++;
            b[i] = a[i];
        }else b[i] = 0;
    }
    printf("%d ", dem);
    for(i = 0; i < n; i++){
        if(b[i] != 0) printf("%d ", b[i]);
    }
}