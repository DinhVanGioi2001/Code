#include<stdio.h>

int sumNumber(int n){
    int sum = 0, tmp = n;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    int i, sum = 0;
    int res1 = sumNumber(n);
    for(i = 2; i <= n; i++){
        while(n % i == 0){
            if(i >= 10){
                int sum2 = sumNumber(i);
                sum += sum2;
            }else sum += i;
            n /= i;
        }
    }
    if(res1 == sum) printf("YES\n");
    else printf("NO\n");
}