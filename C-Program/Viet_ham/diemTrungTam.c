#include<stdio.h>

int kiemTraThangHang(int xa, int xb, int xc, int ya, int yb, int yc){
    if((xb-xa)*(yc-yb) == (xc-xb)*(yb-ya))
        return 1;
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int x[n], y[n];
    int i, check = 1;
    for(i = 0; i < n-1; i++){
        scanf("%d%d", &x[i], &y[i]);
    }
    for(i = 0; i < n-3; i++){
        if(kiemTraThangHang(x[i], x[i+1], x[i+2], y[i], y[i+1], y[i+2]) == 0){
            check = 0;
            break;
        }
    }
    if(check == 1) printf("Yes");
    else printf("No");
}