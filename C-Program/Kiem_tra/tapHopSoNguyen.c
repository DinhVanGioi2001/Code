#include<stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n], b[m], i,j;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);
    i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] == b[j]){
            printf("%d ", a[i]);
            i++; j++;
        }else if(a[i] < b[j]) i++;
        else j++;
    }
    printf("\n");
    for(i = 0; i < n;i++){
        int count = 0;
        for(j = 0; j < m;j++){
            if(a[i] == b[j]){
                count++;
            }
        }
        if(count == 0) printf("%d ", a[i]);
    }
    printf("\n");
    for(i = 0; i < m; i++){
        int count = 0;
        for(j = 0; j < n; j++){
            if(b[i] == a[j]){
                count++;
            }
        }
        if(count == 0) printf("%d ", b[i]);
    }
    printf("\n");
}