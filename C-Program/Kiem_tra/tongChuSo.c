#include<stdio.h>
#include<string.h>
typedef long long ll;

ll countNum(char s[]){
    ll count = 1, sum = 0;
    int tmp;
    if(s[0] == '-') s[0] = 0;
    int n = strlen(s), i;
    for(i = 0; i < n; i++){
        sum += (s[i] - '0');
        if(i == n - 1 && sum > 9){
            count++;
        }
    }
    int sum2 = 0;
    while(sum > 0){
        tmp = sum % 10;
        sum2 += tmp;
        sum /= 10;
        if(sum == 0 && sum2 > 9){
            count++;
            sum = sum2;
            sum2 = 0;
        }
    }
    return count;
}

int main(){
    char s[100000];
    scanf("%s", s);
    ll res = countNum(s);
    printf("%lld", res);
}