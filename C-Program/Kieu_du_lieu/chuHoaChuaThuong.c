#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        getchar();
        char c;
        scanf("%c", &c);
        if(c >= 65 && c <= 90) 
            c += 32;
        else if(c >= 97 && c <= 122)
            c -= 32;
        printf("%c\n", c);
    }
}