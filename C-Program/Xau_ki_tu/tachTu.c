#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    gets(s);
    int i, len = strlen(s);
    for(i = 0; i < len; i++){
        if(s[i] == ' ' && s[i+1] != ' ' ) printf("\n");
        else printf("%c", s[i]);;
    }
}
