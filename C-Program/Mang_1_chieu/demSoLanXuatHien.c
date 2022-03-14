#include<stdio.h>

int check(int a[], int number, int start, int end){
    int i;
    for(i = start; i < end; i++){
        if(number == a[i]) return 1;
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n], i, j;
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n; i++){
        int count = 1;
        if(check(a, a[i], 0, i) == 0){
            for(j = i + 1; j < n; j++)
                if(a[i] == a[j])
                    count++;
            printf("%d %d\n", a[i], count);
        }
    }
}