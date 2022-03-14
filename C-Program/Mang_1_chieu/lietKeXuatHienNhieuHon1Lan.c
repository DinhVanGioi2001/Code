#include<stdio.h>

int check(int a[], int n, int start, int end){
    int i;
    for(i = start; i < end; i++)
        if(a[i] == n) return 1;
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[1000000], i;
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    int count = 0, l = 0;
    for(i = 0; i < n; i++){
        count = 0;
        if(check(a, a[i], 0, i) == 0){
            if(check(a, a[i], i+1, n)){
                count++;
            }
            b[i] = count;
        }
    }
}