#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a[n], i;
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        int count = 0;
        for(i = 0; i < n-1; i++)
            if(a[i] == a[i+1]) count++;
        printf("%d\n", count);
    }
}