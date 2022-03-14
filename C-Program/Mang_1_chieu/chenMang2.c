#include<stdio.h>

void chenMang(int a[], int b[], int n, int m, int p){
    int i, j = 0;
    for(i = n-1+m; i >= p; i--){
        a[i] = a[i-m];
    }
    for(i = p; i < p + m; i++){
        a[i] = b[j];
        j++;
    }
}

int main(){
    int test, j = 1;
    scanf("%d", &test);
    while(test--){
        int n, m, p;
        scanf("%d%d%d", &n, &m, &p);
        int a[n + m], b[m], i;
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        for(i = 0; i < m; i++) scanf("%d", &b[i]);
        chenMang(a, b, n, m, p);
        printf("Test %d:\n", j);
        j++;
        for(i = 0; i < n+m; i++) printf("%d ", a[i]);
        printf("\n");
    }
}