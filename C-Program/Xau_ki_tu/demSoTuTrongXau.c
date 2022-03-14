#include<stdio.h>
#include<string.h>

int main(){
    int test;
    scanf("%d", &test);
    getchar();
    while(test--){
        char s[200];
        gets(s);
        int len = strlen(s), i, count = (s[0] != ' ');
        for(i = 0; i < len-1; i++){
            if(s[i] == ' ' && s[i+1] != ' ')
                count++;
        }
        printf("%d\n", count);
    }
}