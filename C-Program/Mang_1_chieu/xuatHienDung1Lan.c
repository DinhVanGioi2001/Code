#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j, k = 0, count,dem = 0, a[n], b[n];
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n; i++){
        count = 0;
        for(j = 0; j < n; j++){
            if(a[i] == a[j] && i != j){
                count++;
                break;
            }
        }
        if(count == 0){ 
            dem++;
            b[k] = a[i];
            k++;
        }
    }
    printf("%d\n", k);
    for(i = 0; i < k; i++) printf("%d ", b[i]);
}