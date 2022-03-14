#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if(d - b == c - a) printf("YES\n");
        else printf("NO\n");
    }
}