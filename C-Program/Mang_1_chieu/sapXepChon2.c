#include<stdio.h>

void Swap(int *x, int *y){
    int tmp = *x;
    *x =  *y;
    *y = tmp;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n], i;
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    int min, j, k;
    for(i = 0; i < n-1; i++){
        min = i;
        int count = 0;
        for(j = i + 1; j < n; j++)
            if(a[j] < a[min]){
                count = 1;
                min = j;
            }
        // if(count == 0) break;
        Swap(&a[min], &a[i]);
        for(k = 0; k < n; k++) printf("%d ", a[k]);
        printf("\n");
    }
}