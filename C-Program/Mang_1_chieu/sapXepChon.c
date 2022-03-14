#include<stdio.h>

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n], i, j, h, count = 1;;
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n-1; i++){
        int min = i;
        for(j = i + 1; j < n; j++)
            if(a[min] > a[j])
                min = j;
        swap(&a[i], &a[min]);
        printf("Buoc %d: ", count++);
        for(h = 0; h < n; h++) printf("%d ", a[h]);
        printf("\n");
    }
}