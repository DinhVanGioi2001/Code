#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j, k = n-1, h;
    for(i = 1; i <= n; i++){
        if(k > 0){
            for(h = 1; h<= k; h++) printf("~");
            k--;
        }
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}