#include <stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    if(n<= 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    int i;
    for(i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i+2) == 0)
            return 0;
    }
    return 1;
}
int sumPrime(int n){
    if(isPrime(n)) return n;
    int sum = 0;
    while(n % 2 == 0){
        sum += 2;
        n /= 2;
    }
    if(isPrime(n)) return(sum + n);
    int i;
    for(i = 3; i*i <= n; i += 2){
        while(n % i == 0){
            sum += i;
            n /= i;
        }
    }
    if(n > 2) sum += n;
    return sum;
}

int main()
{
    int test;
    scanf("%d", &test);
    long long sum = 0;
    while (test--)
    {
        int n;
        scanf("%d", &n);
        sum += sumPrime(n);
    }
    printf("%lld", sum);
}