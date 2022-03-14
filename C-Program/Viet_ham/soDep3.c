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
ll sumNumber(int n){
    int sum = 0, count = 0;
    while(n > 0){
        int tmp = n % 10;
        if(tmp == 6) count++;
        sum += tmp;
        n /= 10;
    }
    int res = sum % 10;
    if(res == 8 && count != 0) return 1;
    return 0;
}

int main(){
    ll a, b;
    scanf("%lld%lld", &a, &b);
    ll i, min, max;
    if(a > b) max = a, min = b;
    else min = a, max = b;
    for(i = min; i <= max; i++)
        if(soThuanNghich(i) && sumNumber(i)) printf("%lld ", i);

}