#include<stdio.h>

int soGiam(int n){
    int tmp1 = n % 10, tmp2;
    n /= 10;
    while(n > 0){
        tmp2 = n % 10;
        if(tmp2 <= tmp1) return 0;
        tmp1 = tmp2;
        n /= 10;
    }
    return 1;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int a, b;
        scanf("%d%d", &a, &b);
        int i, count = 0;
        for(i = a; i <= b; i++)
            if(soGiam(i)) count++;;
        printf("%d\n", count);
    }
}