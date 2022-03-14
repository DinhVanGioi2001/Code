#include<stdio.h>

int doitien(int n){
    int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int k = 10, i, res = 0;
    for(i = 0; i < k; i++){
        res += n/a[i];
        n %= a[i];
    }
    return res;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        printf("%d\n", doitien(n));
    }
}