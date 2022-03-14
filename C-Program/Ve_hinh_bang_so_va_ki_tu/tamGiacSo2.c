#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j, k = 1, h = 1;
    for(i = 1; i <= n; i++){
        if(i % 2 == 1){
            h = 1;
            for(j = 1; j <= k; j++){
                printf("%d", h);
                h+=2;
            }
        }else{
            h = 2;
            for(j = 1; j  <= k; j++){
                printf("%d", h);
                h += 2;
            }
        }
        k++;
        printf("\n");
    }
}