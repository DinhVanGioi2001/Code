#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j, k = n-1, h;
    for(i = 0; i < n; i++){
        if(k > 0){
            for(h = 1; h <= k; h++) printf("~");
            k--;
        }
        for(j = 0; j < n; j++)
			if(i == 0 || j == 0 || i == n-1 || j == n-1)
				printf("*");
			else printf(".");
        printf("\n");
    }
}