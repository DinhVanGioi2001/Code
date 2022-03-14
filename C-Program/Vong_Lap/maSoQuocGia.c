#include<stdio.h>
typedef long long ll;

ll tachSo(ll n){
    ll a = 0, c = n;
    int check = 0, b;
    while(n > 0){
        b = n % 10;
        if(b == 4 && check == 0){
            c /= 10;
            if(c % 10 == 8){
                c /= 10;
                if(c % 10 == 0){
                    check++;
                    c /= 10;
                }
            } 
        }
        if(check == 1){
            check++;
            n = c;
        }else{
            a = a*10 + b;
            c = n;
            n /= 10;
            c /= 10;
        }
    }
    return a;
}
ll inSo(ll a){
    ll sum = 0;
    while(a > 0){
        int tmp = a % 10;
        a /= 10;
        sum = sum*10 + tmp;
    }
    printf("%lld\n", sum);
}
int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        ll n;
        scanf("%lld", &n);
        ll a = tachSo(n);
        inSo(a);
    }
}