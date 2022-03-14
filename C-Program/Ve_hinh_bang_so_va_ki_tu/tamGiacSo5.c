#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j, k, h = 1, tmp;
    for(i = 1; i <= n; i++){
        k = h/2 + 1;
        tmp = 2;
        for(j = 1; j <= h; j++){
            if(j < k){
                printf("%d", tmp);
                tmp += 2;
            }else if(j == k)
                printf("%d", tmp);
            else{
                tmp -= 2;
                printf("%d", tmp);
            }
        }
        printf("\n");
        h += 2;
    }
}