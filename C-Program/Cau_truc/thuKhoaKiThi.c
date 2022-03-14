#include<stdio.h>

struct danhSachthiSinh{
    int maThiSinh;
    char tenThiSinh[100];
    char ngaySinh[30];
    float diem1, diem2, diem3;
    float tongDiem;
};
typedef struct danhSachthiSinh TS;

void nhap(TS a[], int n){
    int i, j;
    for(i = 0; i < n; i++){
        getchar();
        gets(a[i].tenThiSinh);
        gets(a[i].ngaySinh);
        scanf("%f%f%f", &a[i].diem1, &a[i].diem2, &a[i].diem3);
        a[i].maThiSinh = i + 1;
        a[i].tongDiem = a[i].diem1 + a[i].diem2 + a[i].diem3;
    }
}
void sapXep(TS a[], int n){
    int i, j;
    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(a[i].tongDiem < a[j].tongDiem){
                TS tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int main(){
    int n;
    scanf("%d", &n);
    TS a[n];
    nhap(a, n);
    sapXep(a, n);
    float tmp = a[0].tongDiem;
    int i;
    for(i = 0; i < n; i++){
        if(a[i].tongDiem == tmp){
            printf("%d %s %s %.1f\n", a[i].maThiSinh, a[i].tenThiSinh, a[i].ngaySinh, a[i].tongDiem);
        }
    }
}