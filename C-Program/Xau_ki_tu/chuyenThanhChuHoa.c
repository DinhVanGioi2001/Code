#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    fgets(s, sizeof(s), stdin);
    int tmp = strlen(s), i;
    for(i = 0; i < tmp; i++){
        if(s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    }
    printf("%s", s);
}