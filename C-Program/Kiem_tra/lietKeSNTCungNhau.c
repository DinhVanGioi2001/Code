#include<stdio.h>
#include<math.h>

int isPrime(int n){
    if(n < 2) return 0;
    int i;
    for(i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return 0;
    return 1;
}
int check(int a[], int start, int end, int n){
    int i;
    for(i = start; i < end; i++){
        if(a[i] == n) return 0;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[100000];
    int i;
    for(i = 0; i < 100000; i++) b[i] = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    for(i = 0; i < n; i++){
        if(check(a, 0, i, a[i])){
            if(isPrime(a[i]))
                printf("%d %d\n", a[i], b[a[i]]);
        }
    }
}