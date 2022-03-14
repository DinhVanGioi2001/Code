#include<stdio.h>
#include<math.h>

void sapXep(int a[], int n){
    int i, j;
    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}
int isPrime(int n){
    int i;
    if(n < 2) return 0;
    for(i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return 0;
    return 1;
}
int check(int a[], int n, int start, int end){
    int i;
    for(i = start; i < end; i++)
        if(a[i] == n) return 0;
    return 1;
}
int dem(int a[], int n, int start, int end){
    int i, count = 1;
    for(i = start; i < end; i++){
        if(a[i] == n) count++;
    }
    return count;
}
int main(){
    int test, j = 1;
    scanf("%d", &test);
    while(test--){
        int n,i;
        scanf("%d", &n);
        int a[n];
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        sapXep(a, n);
        printf("Test %d:\n", j++);
        for(i = 0; i < n; i++){
            if(check(a, a[i], 0, i) && isPrime(a[i])){
                printf("%d xuat hien %d lan\n", a[i], dem(a, a[i], i+1, n));
            }
        }
    }
}