#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j, tmp, a[n];
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n-1; i++)
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    for(i = 0; i < n; i++) printf("%d ", a[i]);
}