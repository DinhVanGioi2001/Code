#include<stdio.h>
#include<math.h>


int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long n;
        scanf("%d", &n);
        long count = 0;
        if(n % 2 == 1) printf("0\n");
        else{
            long i;
            for(i = 1; i <= sqrt(n); i++){
                if(n % i == 0){
                    if(i % 2 == 0) count++;
                    if((n/i) % 2 == 0) count++;
                }
            }
            i--;
            if(n % i == 0 && i * i == n) count--;
            printf("%ld\n", count);
        }
    }
}