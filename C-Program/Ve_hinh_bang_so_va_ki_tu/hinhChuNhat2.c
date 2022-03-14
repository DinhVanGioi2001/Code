#include<stdio.h>

int main(){
    int row, col;
    scanf("%d%d", &row, &col);
    int i, j;
    for(i = 1; i <= row; i++){
        int tmp = col - 1;
        for(j = i; j <= col; j++)
            printf("%d", j);
        if(i > col){
            for(j = i; j > i - col; j--)
                printf("%d", j);
        }else
            for(j = i -1; j >= 1; j--)
                printf("%d", tmp--);
        printf("\n");
    }
}