#include<stdio.h>
#include<string.h>

int isPrime(int n){
    if(n < 2) return 0;
    if(n <= 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    int i;
    for(i = 5; i * i <= n; i+= 6)
        if(n % i == 0 || n % (i + 2) == 0) 
            return 0;
    return 1;
}
int soDep3(char s[500]){
    int a[500];
    int i, len = strlen(s);
    for(i = 0; i < len; i++){
        if(isPrime(s[i] - '0') == 0) return 0;
        a[i] = s[i];
    }
    for(i = 0; i < len; i++)
        if(s[i] != a[len - i - 1]) 
            return 0;
    return 1;
}

int main(){
    int test;
    scanf("%d", &test);
    getchar();
    while(test--){
        char s[500];
        gets(s);
        if(soDep3(s)) printf("YES\n");
        else printf("NO\n");
    }
}