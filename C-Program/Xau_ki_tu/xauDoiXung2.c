#include<stdio.h>
#include<string.h>

int main(){
    char s[100000];
    scanf("%s", &s);
    int len = strlen(s);
    int mid = len/2, i, check = 0;
    for(i = 0; i < mid;){
        if(s[i] != s[len-1]){
            check = 1;
            break;
        }else{
            len--;
            i++;
        }
    }
    if(check == 0)
}