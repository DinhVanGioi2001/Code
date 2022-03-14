#include<stdio.h>

int main(){
    int m, n, p, q;
    scanf("%d%d%d%d", &m, &n, &p, &q);
    int a[m][n], b[n][p], c[p][q];
    int i, j;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < n; i++)
        for(j = 0; j < p; j++)
            scanf("%d", &b[i][j]);
    for(i = 0; i < p; i++)
        for(j = 0; j < q; j++)
            scanf("%d", &c[i][j]);
    int tmp1[m][p], k;
    //A*B
    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
            int sum = 0;
            for(k = 0; k < n; k++)
                sum += (a[i][k] * b[k][j]);
            tmp1[i][j] = sum;
        }
    }
    // d = tmp * c
    int d[m][q];
    for(i = 0; i < m; i++){
        for(j = 0; j < q; j++){
            int sum = 0;
            for(k = 0; k < p; k++)
                sum += (tmp1[i][k] * c[k][j]);
            d[i][j] = sum;
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < q; j++){
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
}