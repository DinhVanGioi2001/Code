#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long long int n;
        scanf("%lld", &n);
        int dem = 0;
        while(n > 0){
            int tmp = n % 10;
            n /= 10;
            if(tmp % 2 != 0){
                printf("NO\n");
                dem = 1; 
                break;
            }
        }
        if(dem == 0) printf("YES\n");
    }
}