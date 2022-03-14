#include<stdio.h>
#include<limits.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a[n], i, max = INT_MIN;
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
            if(a[i] > max) max = a[i];
        }
        printf("%d\n", max);
        for(i = 0; i < n; i++){
            if(a[i] == max)
                printf("%d ", i);
        }
        printf("\n");
    }
}