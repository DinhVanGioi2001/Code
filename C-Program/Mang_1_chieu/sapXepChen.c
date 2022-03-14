#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n + 1], i, j, h;
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    int dem = 0;
    for(i = 1; i <= n; i++){
        printf("Buoc %d: ", dem++);
        for(h = 0; h < i; h++) printf("%d ", a[h]);
        printf("\n");
        int tmp = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > tmp){
            a[j+1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
    }
}