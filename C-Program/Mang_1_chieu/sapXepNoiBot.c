#include<stdio.h>

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n], i, j, count = 1;
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n-1; i++){
        int check = 0;
        for(j = 0; j < n-i-1; j++)
            if(a[j+1] < a[j]){
                swap(&a[j+1], &a[j]);
                check = 1;
            }
        if(check){
            printf("Buoc %d: ", count++);
            for(j = 0; j < n; j++) printf("%d ", a[j]);
            printf("\n");
        }else break;
    }
}