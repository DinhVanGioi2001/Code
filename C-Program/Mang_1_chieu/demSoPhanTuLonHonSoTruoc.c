#include<stdio.h>


int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a[n], i;
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        int count = 1, j;
        for(i = 1; i < n; i++){
            int check = 0;
            for(j = 0; j < i; j++)
                if(a[j] > a[i]) check++;
            if(check == 0) count++;
        }
        printf("%d\n", count);
    }
}