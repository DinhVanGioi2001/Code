#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j, k = 1;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= k; j++){
            printf("%d", j);
        }
        k += 2;
        printf("\n");
    }
}