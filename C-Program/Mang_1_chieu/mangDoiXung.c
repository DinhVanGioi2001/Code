#include<stdio.h>

int doiXung(int a[], int n){
    int i;
    for(i = 0; i < n/2; i++)
        if(a[i] != a[n-1-i]) return 0;
    return 1;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a[n], i;
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        if(doiXung(a, n)) printf("YES\n");
        else printf("NO\n");
    }
}