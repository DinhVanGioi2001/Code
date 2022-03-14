#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int le = 0, chan = 0;
    while(n > 0){
        int tmp = n % 10;
        n /= 10;
        if(tmp %2 == 1) le++;
        else chan++;
    }
    printf("%d %d", le, chan);
}