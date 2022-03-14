#include<stdio.h> 

int st(int n) { 
    int x, tong =0, i; 
    for(i = 1 ; i < n ; i++)
        if(n % i == 0)
            tong = tong + i; 
    if(n==tong)
        return 1; 
    else return 0;
} 

int main(){ 
    int a,b,i; 
    scanf("%d%d",&a,&b); 
    int min, max;
    if (a > b)
        max = a, min = b;
    else min = a, max = b;
    for(i = min; i <= max; i++)
            if(st(i)) printf("%d ",i);
    return 0; 
}