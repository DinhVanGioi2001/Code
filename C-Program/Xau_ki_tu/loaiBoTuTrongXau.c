#include<stdio.h>
#include<string.h>

char RemoveChar(char s1[], char s2[]){
    int i, j;
    int lenght1 = strlen(s1);
    int lenght2 = strlen(s2);
    for(i = 0; i < lenght1; i++){
        if(s1[i] == s2[0] && s1[i + lenght2 - 1] == s2[lenght2 - 1]){
            for(j = i; j < lenght1; j++)
                s1[j] = s1[j + lenght2];
            lenght1 -= lenght2;
        }
    }
    s1[j] = '\0';
    printf("%s", s1);
}

int main(){
    char s1[100], s2[100];
    gets(s1);
    gets(s2); // nhap vao sẽ không có kí tự \n
    // fgets(s1, sizeof(s1), stdin); //nhập vào sẽ có kí tự \n
    // fgets(s2, sizeof(s2), stdin);
    RemoveChar(s1, s2);
}