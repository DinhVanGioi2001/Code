#include<stdio.h>
#define ll long long

void solution(int a[], int n){
    int max = a[0], check = 0, i;
    for(i = 0; i < n; i++){
        if(a[i] > 0) check = 1;
        if(max < a[i]) max = a[i];
    }
    if(check == 0) printf("%d", max);
    else{
        ll sum = 0, res = 0;
        for(i = 0; i < n; i++){
            if(sum + a[i] <= 0){
                sum = 0;
                continue;
            }
            sum += a[i];
            if(res < sum) res = sum;
        }
        printf("%lld", res);
    }
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a[n], i;
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        solution(a, n);
        printf("\n");
    }
}