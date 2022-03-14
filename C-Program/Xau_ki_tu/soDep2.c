#include<stdio.h>
#include<string.h>

int check(char s[]){
    char a[500];
    int len = strlen(s);
    if(s[0] != '8' || s[len-1] !=  '8') return 0;
    int i, sum = 0;
    for(i = 0; i < len; i++){
        int tmp = s[i] - '0';
        sum += tmp;
        a[i] = s[i];
    }
    if(sum % 10 != 0) return 0;
    for(i = 0; i < len; i++)
        if(s[i] != a[len-i-1]) return 0;
    return 1;
}

int main(){
    int test;
    scanf("%d", &test);
    getchar();
    while(test--){
        char s[500];
        gets(s);
        if(check(s))
            printf("YES\n");
        else printf("NO\n");
    }
}