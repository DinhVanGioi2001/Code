#include<stdio.h>

int count(int n){
    int dem = 0;
    while(n > 1){
        int t = n;
        while(t % 2==0){
            dem++;
            t/=2;
        }
        n--;
    }
    return dem;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int res = count(a);
    if(res >= b) printf("Yes");
    else printf("No");
}