#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int i, j, k = 1, h;
    for(i = 0; i < a; i++){
        if(k == i){
            for(h = 1; h <= k; h++) printf("~");
            k++;
        }
        for(j = 0; j < b; j++)
            if(i == 0 || j == 0 || i == a-1 || j == b-1)
				printf("*");
			else printf(".");
        printf("\n");
    }
}