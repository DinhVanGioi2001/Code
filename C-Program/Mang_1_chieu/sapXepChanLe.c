#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n], i, j;
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    int b[n], c[n], chan = 0, le = 0;
    for(i = 0; i <n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    for(i = 0; i < n; i++)
        if(a[i] % 2 == 0){
            b[chan] = a[i]; 
            chan++;
        }else{
            c[le] = a[i];
            le++;
        }
    for(i = 0; i < chan; i++) printf("%d ", b[i]);
    for(i = 0; i < le; i++) printf("%d ", c[i]);

}