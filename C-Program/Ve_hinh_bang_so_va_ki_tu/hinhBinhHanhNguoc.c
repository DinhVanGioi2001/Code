#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int i, j, k = 1, h;
    for(i = 0; i < a; i++){
        if(k == i){
            for(h = 1; h <= k; h++) printf("~");
            k++;
        }
        for(j = 0; j < b; j++){
            printf("*");
        }
        printf("\n");
    }
}