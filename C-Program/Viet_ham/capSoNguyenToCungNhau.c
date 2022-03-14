#include<stdio.h>

int gcdMax(int a, int b){
    while(a * b != 0){
        if(a > b) a %= b;
        else b %= a;
    }
    if(a == 1 || b == 1) return 1;
    else return 0;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int i, j;
    for(i = a; i < b; i++)
        for(j = i + 1; j <= b; j++)
            if(gcdMax(i, j) == 1)
                printf("(%d,%d)\n", i, j);
}