#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a[n], i, j, check = 0;
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        for(i = 0; i < n-1; i++){
            check = 0;
            for(j = i + 1; j < n; j++)
                if(a[i] == a[j]){
                    check = 1;
                    printf("%d\n", a[i]);
                    break;
                }
            if(check == 1) break;
        }
        if(check == 0) printf("NO\n");
    }
}