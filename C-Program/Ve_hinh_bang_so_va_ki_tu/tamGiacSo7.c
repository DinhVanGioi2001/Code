#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j, k = 1, h;
    for(i = 1; i <= n; i++){
        h = n - 1;
        printf("%d ", i);
        int p = i;
        for(j = 1; j < i; j++){
            p += h;
            printf("%d ", p);
            h--;
        }
        k++;
        printf("\n");
    }
}