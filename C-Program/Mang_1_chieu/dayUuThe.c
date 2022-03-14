#include<stdio.h>

int a[202];
int checkChanLe(int m){
    int i, demChan= 0, demLe = 0;
    for(i = 0; i < m; i++)
        if(a[i] % 2 == 0) demChan++;
        else demLe++;
    if(demChan > demLe) return 1;
    else if(demLe > demChan) return 0;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        char c[202];
        int i, m = 0;
        for(i = 0; i < 200; i++){
            scanf("%d", &a[i]);
            m++;
            scanf("%c", &c[i]);
            if(c[i] == '\n') break;
        }
        if(m % 2 == 0 && checkChanLe(m) || m % 2 && checkChanLe(m) == 0) 
            printf("YES\n");
        else printf("NO\n");
    }
}