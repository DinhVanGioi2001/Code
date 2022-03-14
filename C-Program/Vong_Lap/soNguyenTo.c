#include<stdio.h>
#include<math.h>


int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long long n;
        scanf("%lld", &n);
        int i, count = 0;
        for(i = 2; i <= sqrt(n); i++){
            if(n % i == 0)
                count++;
        }
        if(count == 0) printf("YES\n");
        else printf("NO\n");
    }
}