#include<stdio.h>
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
ll checkLe(ll n){
    ll sum = 0;
    while(n > 0){
        ll tmp = n % 10;
        if(tmp % 2 == 0) return 0;
        else sum += tmp;
        n /= 10;
    }
    if(sum % 2 == 1) return 1;
    else return 0;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        ll n;
        scanf("%lld", &n);
        if(n % 2 == 0) printf("NO\n");
        else if(checkLe(n) && soThuanNgich(n)) printf("YES\n");
        else printf("NO\n");
    }
}