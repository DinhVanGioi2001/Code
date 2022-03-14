#include<stdio.h>
#include<math.h>
#include<stdbool.h>
typedef long long ll;

// bool isPerfectSquare(ll n){
//     ll s = sqrt(n);
//     return (s * s == n);
// }

// bool isFibonaci(ll n){
//     return isPerfectSquare(5*n*n + 4) || 
//            isPerfectSquare(5*n*n - 4);
// }
long long isFibonaci(long long n){
    long long f1 = 0, f2 = 1, fi = 0;
    while(fi <= n){
        if(fi == n) return 1;
        fi = f1 + f2;
        f1 = f2;
        f2 = fi;
    }
    return 0;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        ll n;
        scanf("%lld", &n);
        if(isFibonaci(n)) printf("YES\n");
        else printf("NO\n");
    }
}