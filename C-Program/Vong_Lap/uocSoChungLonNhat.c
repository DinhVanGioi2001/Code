#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int a, b;
        scanf("%d%d", &a, &b);
        if(a == 0 || b == 0)
            printf("%d\n", a + b);
        else{
            while(a != b){
                if(a > b) a -= b;
                else b -= a;
            }
            printf("%d\n", a);
        }
    }
}