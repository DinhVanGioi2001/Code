#include<stdio.h>

int UCLN(int a, int b){
    while(a * b != 0){
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}
int BCNN(int a, int b){
    return a * b / UCLN(a, b);
}
typedef struct PhanSo{
    int tu, mau;
} ps;
ps rutGon(ps a){
    ps c;
    int tmp = UCLN(a.tu, a.mau);
    c.tu = a.tu / tmp;
    c.mau = a.mau / tmp;
    return c;
}
void quyDong(ps a, ps b){
    ps c, d;
    a = rutGon(a);
    b = rutGon(b);
    int i = BCNN(a.mau, b.mau);
    c.tu = (i / a.mau) * a.tu;
    c.mau = i;
    printf("%d/%d ", c.tu, c.mau);
    d.tu = (i / b.mau) * b.tu;
    d.mau = i;
    printf("%d/%d\n", d.tu, d.mau);
}
ps tong(ps a, ps b){
    ps c;
    c.tu = a.tu * b.mau + a.mau * b.tu;
    c.mau = a.mau * b.mau;
    c = rutGon(c);
    return c;
}
ps thuong(ps a, ps b){
    ps c;
    c.tu = a.tu * b.mau;
    c.mau = a.mau * b.tu;
    c = rutGon(c);
    return c;
}
int main(){
    int test, count = 1;
    scanf("%d", &test);
    while(test--){
        ps a, b, c;
        scanf("%d%d%d%d", &a.tu, &a.mau, &b.tu, &b.mau);
        printf("Case #%d:\n", count++);
        quyDong(a, b);
        c = tong(a, b);
        printf("%d/%d\n", c.tu, c.mau);
        c = thuong(a, b);
        printf("%d/%d\n", c.tu, c.mau);
    }
}