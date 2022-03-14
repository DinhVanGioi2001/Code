#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n], i, sum = 0;
    for(i = 0; i < n; i++){ 
        scanf("%d", &a[i]);
        sum += a[i];
    }
    float tb = sum*1.0 / n;
    printf("%.3f", tb);
}