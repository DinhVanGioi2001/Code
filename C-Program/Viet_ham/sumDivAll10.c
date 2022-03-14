#include<stdio.h>

int sumNumber(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        if(sumNumber(n) % 10 == 0) printf("YES\n");
        else printf("NO\n");
    }
}