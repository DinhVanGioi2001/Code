#include<stdio.h>

typedef struct sapXepThiSinh{
    int maThiSinh;
    char tenThiSinh[100], ngaySinh[30];
    float diem1, diem2, diem3, tongDiem;
} ts;
void nhap(ts a[], int n){
    int i;
    for(i = 0; i < n; i++){
        getchar();
        gets(a[i].tenThiSinh);
        gets(a[i].ngaySinh);
        scanf("%f%f%f", &a[i].diem1, &a[i].diem2, &a[i].diem3);
        a[i].maThiSinh = i + 1;
        a[i].tongDiem = a[i].diem1 + a[i].diem2 + a[i].diem3;
    }
}
void sapXep(ts a[], int n){
    int i, j;
    ts tmp;
    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(a[i].tongDiem < a[j].tongDiem){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}
void xuat(ts a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d %s %s %.1f\n", a[i].maThiSinh, a[i].tenThiSinh, a[i].ngaySinh, a[i].tongDiem);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    ts a[n];
    nhap(a, n);
    sapXep(a, n);
    xuat(a, n);
}