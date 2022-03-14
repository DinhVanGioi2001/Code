#include<stdio.h>

int check(int a[], int number, int start, int end){
    int i;
    for(i = start; i < end; i++)
        if(a[i] == number) return 0;
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n], i, j = 0, b[n];
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
        if(check(a, a[i], 0, i)){
            b[j] = a[i];
            j++;
        }
    for(i = 0; i < j; i++) printf("%d ", b[i]);
}