#include<stdio.h> 


int main() { 
    int a[100], b[100]; int n, m, i, j; 
    scanf("%d%d" ,&n, &m); 
    for (i=0; i<n; i++) 
        scanf("%d", &a[i]); 
    for( j=0; j<m; j++) 
        scanf("%d", &b[j]); 
    int k, t; 
    scanf("%d", &k); 
    for( t=n-1; t>=k; t--) 
        a[t+m]=a[t]; 
    int h=0; 
    for (i=k; i<k+m; i++) 
        for( j=h; j<m; j++){ 
            a[i]=b[j]; 
            h++; 
            break;
        } 
    for (i=0; i<n+m; i++) 
        printf("%d ", a[i]); }