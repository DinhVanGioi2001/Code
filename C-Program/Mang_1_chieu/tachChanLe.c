#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n], chan[n], le[n];
    int i, count = 0, tmp1 = 0, tmp2 = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0){
            chan[tmp1] = a[i];
            tmp1++;
        }else{
            le[tmp2] = a[i];
            tmp2++;
        }
    }
    for(i = 0; i< tmp1; i++) printf("%d ", chan[i]);
    printf("\n");
    for(i = 0; i< tmp2; i++) printf("%d ", le[i]);
    printf("\n");
}