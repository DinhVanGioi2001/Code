#include<stdio.h>

int check(int a[], int number, int start, int end){
    int i;
    for(i = start; i < end; i++) 
        if(a[i] == number) return 0;
    return 1;
}
int dem(int a[], int n, int start, int end){
    int i, count = 1;
    for(i = start; i < end; i++){
        if(a[i] == n) count++;
    }
    return count;
}

int main(){
    int test, j = 1;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a[n];
        int i;
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        printf("Test %d:\n", j++);
        for(i = 0;i < n; i++){
            if(check(a, a[i], 0, i)){
                printf("%d xuat hien %d lan\n", a[i], dem(a, a[i], i+1, n));
            }
        }
    }
}