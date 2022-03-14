#include<stdio.h>
#include<math.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long int n;
        scanf("%ld", &n);
        long int res = sqrt(n);
        if(n == res*res) printf("YES\n");
        else printf("NO\n");
    }
}