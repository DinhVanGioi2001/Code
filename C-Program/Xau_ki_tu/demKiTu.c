#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    gets(s);
    int dem1 = 0, dem2 = 0 , dem3 = 0, n = strlen(s), i;
    for(i = 0; i < n; i++){
        if(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
            dem1++;
        else if(s[i] >= 48 && s[i] <= 57)
            dem2++;
        else dem3++;
    }
    printf("%d %d %d", dem1, dem2, dem3);
}