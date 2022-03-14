#include<stdio.h>
int a[100][100], d = 0;

void topRight(int n, int x, int cot, int hang){ // 0 0 n n
    
    while(d <= n*n){
        int i;
        for(i = x; i < cot; i++)
            a[x][i] = d++;
        for(i = x + 1; i < hang; i++)
            a[i][cot-1] = d++;
        if(x != hang - 1)
            for(i = cot - 2; i >= x; i--)
                a[hang - 1][i] = d++;
        if(x != cot - 1)
            for(i = hang - 2; i > x; i--)
                a[i][x] = d++;
        x++; cot--; hang--;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    // topRight(n, 0, n, n);
    int cot = n, hang = n, x = 0, i, j;
    while(d <= n*n){
        int i;
        for(i = x; i < cot; i++)
            a[x][i] = d++;
        for(i = x + 1; i < hang; i++)
            a[i][cot-1] = d++;
        if(x != hang - 1)
            for(i = cot - 2; i >= x; i--)
                a[hang - 1][i] = d++;
        if(x != cot - 1)
            for(i = hang - 2; i > x; i--)
                a[i][x] = d++;
        x++; cot--; hang--;
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}