#include<stdio.h>

int main(){
    int test, countT = 1;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int i, count;
        printf("Test %d: ", countT++);
        for(i = 2; i <= n; i++){
            count = 0;
            while(n % i == 0){
                count++;
                n /= i;
            }
            if(count != 0) printf("%d(%d) ", i, count);
        }
        printf("\n");
    }
}