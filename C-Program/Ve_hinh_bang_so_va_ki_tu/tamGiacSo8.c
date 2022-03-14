#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j, k = 1, h;
    for(i = 1; i <= n; i++){
        
        if(i % 2){
            for(j = 1; j <= i; j++){
                printf("%d ", k++);
            }
        }else{
            h = k + i - 1;
            k += i;
            for(j = i; j >= 1; j--){
                printf("%d ", h--);
            }
        }
        printf("\n");
    }
}