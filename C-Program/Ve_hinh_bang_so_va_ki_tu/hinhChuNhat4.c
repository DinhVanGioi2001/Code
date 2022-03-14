#include<stdio.h> 
#include <stdlib.h>

int main(){ 
    int r,c;
    scanf("%d%d",&r,&c); 
    int max; 
    if(r > c)
        max = r; 
    else
        max=c;
    int i, j;
    for(i = 1; i<=r;i++){ 
        for(j = 1; j<=c;j++){ 
            printf("%d", abs(max-(i+j-1))+1); 
        } 
        printf("\n");
    } 
}