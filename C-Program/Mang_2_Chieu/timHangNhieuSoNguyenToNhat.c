#include<stdio.h>

int prime(int n){
    if(n < 2) return 0;
    if(n <= 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    int i;
    for(i = 5; i*i <= n; i+= 6){
        if(n % i == 0 || n % (i+1) == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n][n], i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int max = 0;
    for(i = 0; i < n; i++){
        int dem = 0;
        for(j = 0; j < n; j++){
            if(prime(a[i][j])){
                dem++;
            }else a[i][j] = 0;
        }
        if(max < dem) max = dem;
    }
    for(i = 0; i < n; i++){
        int dem = 0;
        for(j = 0; j < n; j++){
            if(a[i][j] != 0){
                dem++;
            }
        }
        if(dem == max){
            printf("%d\n", i+1);
            for(j = 0; j < n; j++){
                if(a[i][j] != 0){
                    printf("%d ", a[i][j]);
                }
            }
            break;
        }
    }
}