#include<stdio.h>
#include<math.h>
#define ll long long

ll soThuanNgich(ll n){
    ll sum = 0, tmp = n;
    while(n > 0){
        sum = sum*10 + n % 10;
        n /= 10;
    }
    if(sum == tmp) return 1;
    else return 0; 
}
int sumNumber(ll n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    if(sum % 10 == 0) return 1;
    return 0;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a = pow(10, n-1);
        ll b = pow(10, n), i, count = 0;
        for(i = a; i < b; i++)
            if(soThuanNgich(i))
                if(sumNumber(i)) count++;
        printf("%lld\n", count);
    }
}