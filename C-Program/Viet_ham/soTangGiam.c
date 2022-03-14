#include<stdio.h>
#include<math.h>
#define ll long long

int isPrime(ll n){
    if(n < 2) return 0;
    if(n <= 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    int i;
    for(i = 5; i * i <= n; i+= 6)
        if(n % i == 0 || n % (i+2) == 0) return 0;
    return 1;
}

int Giam(ll n){
    int tmp1 = n % 10; n/=10;
    while(n > 0){
        int tmp2 = n % 10;
        if(tmp2 <= tmp1) return 0;  
        n/=10;
        tmp1 = tmp2;
    }
    return 1;
}
int Tang(ll n){
    int tmp1 = n % 10; n/=10;
    while(n > 0){
        int tmp2 = n % 10;
        n/=10;
        if(tmp2 >= tmp1) return 0;
        tmp1 = tmp2;
    }
    return 1;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a = pow(10, n-1);
        ll b = pow(10, n);
        ll i, count = 0;
        for(i = a; i < b; i++)
            if(Tang(i)|| Giam(i))
                if(isPrime(i))
                // if(Tang(i)|| Giam(i))
                    count++;
        printf("%lld\n", count);
    }
}