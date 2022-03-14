#include<stdio.h>
#include<math.h>

int check(int n){
    int sum = 0, sum2 = 0, tmp = n;
    while(n > 0){
        int tmp2 = n % 10;
        if(tmp2 == 4) return 0;
        sum = sum*10 + tmp2;
        sum2 += tmp2;
        n /= 10;
    }
    if(sum == tmp && sum2 % 10 == 0) return 1;
    return 0;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a = pow(10, n-1);
        int b = pow(10, n),i;
        for(i = a; i < b; i++){
            if(check(i)) printf("%d ", i);
        }
        printf("\n");
    }
}