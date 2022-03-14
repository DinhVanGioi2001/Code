#include<stdio.h>

int main(){
    int test, count = 1;
    scanf("%d", &test);
    while(test--){
        int m, n;
        scanf("%d%d", &m, &n);
        int a[m][n], i, j;
        for(i = 0; i < m; i++)
            for(j = 0; j < n; j++) 
                scanf("%d", &a[i][j]);
        printf("Test %d:\n", count++);
        for(i = 1; i < m; i++){
            for(j = 0; j < n; j++)
                if(j != 0)
                    printf("%d ", a[i][j]);
            printf("\n");
        }
    }

}