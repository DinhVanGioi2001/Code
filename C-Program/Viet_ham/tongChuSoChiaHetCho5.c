#include<stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    if(n <= 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    int i;
    for(i = 5; i * i <= n; i+= 6)
        if(n % i == 0 || n % (i+2) == 0) return 0;
    return 1;
}
int sumNumber(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    if(sum % 5 == 0) return 1;
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int count = 0, i;
    for(i = 2; i <= n; i++)
        if(isPrime(i) && sumNumber(i)){
            printf("%d ", i);
            count++;
        }
    printf("\n%d", count);
}