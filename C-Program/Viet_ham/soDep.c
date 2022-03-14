#include<stdio.h>
#define ll long long
ll soThuanNghich(ll n){
    int sum = 0, tmp = n;
    while(n > 0){
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    if(sum == tmp) return 1;
    return 0;
}
ll soDep(ll n){
    int tmp1 = n % 10; n/= 10;
    ll sum = 0, tmp2;
    while(n > 0){
        int tmp = n % 10;
        n /= 10;
        if(n == 0) {
            tmp2 = tmp;
            break;
        }
        sum = sum * 10 + tmp;
    }
    if(soThuanNghich(sum) && (tmp1 / tmp2 == 2 || tmp2 / tmp1 == 2)) return 1;
    return 0;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        ll n;
        scanf("%lld", &n);
        if(soDep(n)) printf("YES\n");
        else printf("NO\n");
    }
}