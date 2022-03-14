#include<stdio.h>
typedef long long ll;


int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        ll n;
        scanf("%lld", &n);
        ll res = 0, mul = 1, dem = 0;
        while(n > 0){
            int tmp = n % 10;
            if(tmp == 0 || tmp == 8 || tmp == 9)
                res = res + 0*mul;
            else if(tmp == 1)
                res = res + 1 * mul;
            else{
                printf("INVALID\n");
                dem = 1;
                break;
            }
            n /= 10;
            mul *= 10;
        }
        if(dem == 0 && res == 0)
            printf("INVALID\n");
        else if(dem == 0) printf("%lld\n", res);
    }
}