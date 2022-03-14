#include<stdio.h>
#include<string.h>

int countNumber(char s[]){
    char a[500];
    int len1 = strlen(s);
    int i;
    for(i = 0; i < len1; i++){
        if((s[i] - '0') % 2 == 1) return 0;
        else a[i] = s[i];
    }
    for(i = 0; i < len1; i++){
        if(s[i] != a[len1 - i - 1]) return 0;
    }
    return 1;
}

int main(){
    int test;
    scanf("%d", &test);
    getchar();
    while(test--){
        char s[500];
        gets(s);
        if(countNumber(s) == 1) 
            printf("YES\n");
        else printf("NO\n");
    }
}