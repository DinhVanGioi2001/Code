#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n], i, b;
    for(i = 0; i < n;i++) scanf("%d", &a[i]);
    scanf("%d", &b);
    for(i = n - b; i < n; i++)
        printf("%d ", a[i]);
    for(i = 0; i < n - b; i++)
        printf("%d ", a[i]);
}