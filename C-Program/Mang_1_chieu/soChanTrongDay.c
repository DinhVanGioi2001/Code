#include<stdio.h>

void sochan(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0) printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n, i;
        scanf("%d", &n);
        int a[n];
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        sochan(a, n);
    }
}