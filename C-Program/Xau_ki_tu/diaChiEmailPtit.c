#include<stdio.h>
#include<string.h>


int main(){
    char s[100];
    gets(s);
    int len = strlen(s), i, j = 0, k;
    char str[100];
    for(i = len - 1; i >= 0; i--){
        if(s[i] != ' '){
            str[j] = s[i];
            j++;
        }else if(s[i] == ' '){
            k = i;
            break;
        }
    }
    for(i = k - 1; i > 0; i--){
        if(s[i] != ' ' && s[i-1] == ' '){
            str[j] = s[i];
            j++;
        }
    }
    str[j] = s[0];
    int len2 = strlen(str);
    for(i = len2 - 1; i >= 0; i--){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] += 32;
        }
        printf("%c", str[i]);
    }
    printf("@ptit.edu.vn");
}