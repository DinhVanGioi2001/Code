#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n, p;
        scanf("%d%d", &n, &p);
        int i = 1, count = 0;
        while(p*i <= n){
            int tmp = p*i;
            while(tmp % p == 0){
                tmp /= p;
                count++;
            }
            i++;
        }
        printf("%d\n", count);
    }
}