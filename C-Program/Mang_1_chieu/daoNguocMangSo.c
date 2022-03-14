#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n], i;
    for(i = 0; i < n; i++){ 
        scanf("%d", &a[i]);
        b[n - i - 1] = a[i];
    }
    for(i = 0; i < n; i++) printf("%d ", b[i]);
}