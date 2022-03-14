#include <stdio.h>
#include <cmath>

void ptBac2(int a, int b, int c)
{
    float denta = b * b - 4 * a * c;
    if (denta < 0)
    {
        printf("Phuong trinh vo nghiem\n");
    }
    else if (denta == 0)
    {
        printf("Phuong trinh co nghiem duy nhat");
        printf("%.2f\n", -b / (2 * a));
    }
    else
    {
        float x1 = (-b + sqrt(denta)) / (2 * a);
        float x2 = (-b - sqrt(denta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet\n");
        // su dung %.1f la de in ra sau dau phay 1 so thap phan 
        // vd 2.532 thi .1f = 2.5
        printf("Nghiem thu nhat:  %.1f\n", x1);
        printf("Nghiem thu hai: %.1f\n", x2);
    }
}

void nhapMang(int n, int a[]){
    printf("Nhap vao cac phan tu cua mang.\n");
    for(int i = 0; i < n; i++){
        printf("Nhap vao phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int n, int a[]){
    printf("Cac phan tu cua mang la:\n");
    for(int i = 0; i < n; i++){
        printf("Phan tu thu %d la: %d\n", i+1, a[i]);
    }
}

void tinhTBC(int n, int a[]){
    int res = 0, count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            res += a[i];
            count++;
        }
    }
    float tmp = (float)res/count;
    // lay float vi neu la so le vd nhu 25 thi tbc co the ra so le
    printf("Trung binh cong cua cac so nguyen chan la: %.1f\n", tmp);
}

void demSoLe(int n, int a[]){
    int count = 0;
    for(int i = 0; i < n; i++){
        int tmp = a[i] % 10;
        if(a[i] % 5 == 0 && tmp % 2 == 1){
            count++;
        }
    }
    printf("So le tan cung la 5 co %d so.\n", count);
}

int main()
{
    int chon;
    int n;
    int a[100];
    while (true)
    {
        printf("\n||--------------MENU-----------------------------||");
        printf("\n||----------1.GIAI PHUONG TRINH BAC 2------------||");
        printf("\n||----------2.NHAP MANG--------------------------||");
        printf("\n||----------3.XUAT MANG--------------------------||");
        printf("\n||----------4.TINH TRUNG BINH CONG---------------||");
        printf("\n||----------5.SO LE TAN CUNG 5-------------------||");
        printf("\n||----------0.THOAT------------------------------||");
        printf("\n||-----------------------------------------------||");
        printf("\nMoi ban chon: ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:{
            int a, b, c;
            do
            {
                printf("\nNhap vao 3 he so a, b, c cua phuong trinh bac 2:");
                scanf("%d%d%d", &a, &b, &c);
                if (a <= 0)
                {
                    printf("\nMoi nhap a khac 0:");
                }
            } while (a == 0);
            ptBac2(a, b, c);
            break;
        }
        case 2:{
            printf("Nhap n: ");
            scanf("%d", &n);
            nhapMang(n, a);
            break;
        }
        case 3:{
            xuatMang(n, a);
            break;
        }
        case 4:{
            tinhTBC(n, a);
            break;
        }
        case 5:{
            demSoLe(n, a);
            break;
        }
        case 0:{
            printf("Tam biet");
            return 0;
        }
        default:
            printf("Ban chi nhap tu 1 den 5.\n");
        }
    }
}