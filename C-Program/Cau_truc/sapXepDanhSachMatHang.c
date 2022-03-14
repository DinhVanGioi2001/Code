#include<stdio.h>

struct matHang{
    int maMatHang;
    char tenMatHang[100];
    char nhomHang[100];
    double giaMua, giaBan, loiNhuan;
};
typedef struct matHang mh;
mh sapXep(mh a[], int n){
    int i, j;
    mh tmp;
    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(a[i].loiNhuan < a[j].loiNhuan){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int main(){
    int n;
    scanf("%d", &n);
    mh a[1000];
    int i;
    for(i = 0; i < n; i++){
        getchar();
        gets(a[i].tenMatHang);
        gets(a[i].nhomHang);
        scanf("%lf", &a[i].giaMua);
        scanf("%lf", &a[i].giaBan);
        a[i].loiNhuan = a[i].giaBan - a[i].giaMua;
        a[i].maMatHang = i + 1;
    }
    sapXep(a, n);
    for(i = 0; i < n; i++){
        printf("%d %s %s %.2lf\n", a[i].maMatHang, a[i].tenMatHang, a[i].nhomHang, a[i].loiNhuan);
    }
}