#include<stdio.h>

int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    int j, i= 1;
    while(i <= n){
        j = 1;
        while(j <= m){
            if(i == 1 || i == n || j == 1 || j == m)
                printf("*");
            else printf(" ");
            j++;
        }
        i++;
        printf("\n");
    }
}