#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j, k = n, h = 1, tmp, tmp2;
    for(i = 1; i <= n; i++){
        tmp2 = h/2 + 1;
        tmp = 2;
        for(j = 1; j < k; j++)
            printf("~");
        for(j = 1; j <= h; j++){
            if(j < tmp2){
                printf("%d", tmp);
                tmp += 2;
            }else if(j == tmp2)
                printf("%d", tmp);
            else{
                tmp -=2;
                printf("%d", tmp);
            }
        }
        h += 2; k--;
        printf("\n");
    }
}