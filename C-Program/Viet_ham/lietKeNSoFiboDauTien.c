#include<stdio.h>

int fibo(int n){
    if(n == 0) return 0;
    if(n <= 2) return 1;
    int f1 = 1, f2 = 1, i = 3, fi;
    while(i <= n){
        fi = f1 + f2;
        f1 = f2;
        f2 = fi;
        i++;
    }
    return fi;
}

int main(){
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", fibo(i));
    }
}