#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nam = n / 365;
    printf("%d ", nam);
    int tuan = (n - (nam * 365)) / 7;
    printf("%d ", tuan);
    int ngay = (n-nam*365-tuan*7);
    printf("%d ", ngay);
}