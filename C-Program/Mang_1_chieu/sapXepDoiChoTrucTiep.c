#include<stdio.h>

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n], i;
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    int j, h, count = 1;
    for(i = 0; i < n-1; i++){
        for(j = i + 1; j < n; j++)
            if(a[i] > a[j])
                swap(&a[i], &a[j]);
        printf("Buoc %d: ", count++);
        for(h = 0; h < n; h++) printf("%d ", a[h]);
        printf("\n");
    }
}