#include<stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++){
        a[i] = i;
        printf("%d ", a[i]);
    }
    printf("\n");
    int j, tmp = 1;
    while(tmp < n){
        for(j = n - 1; j > 0; j--){
            a[j] = a[j-1];
        }
        for(j = 0; j < n; j++)
            printf("%d ", a[j]);
        printf("\n");
        tmp++;
    }
}