#include<stdio.h>
#include<math.h>


int main(){
    long m, n;
    scanf("%ld%ld", &m, &n);
    long tmp1 = sqrt(m), tmp2 = sqrt(n);
    if(tmp1 * tmp1 != m) tmp1++; // kiem tra xem m co phai so chinh phuong hay khong
    // vd nhu 17 50 thi sqrt17 = 4 thi dem = 7 - 4 +1 = 4 => thua 1 so 
    // cong them 1 vao tmp1 => 7 -5 + 1 = 3 => du
    int i, dem = tmp2 - tmp1 + 1;
    printf("%d\n", dem);
    for(i = tmp1; i <= tmp2; i++){
        printf("%ld\n", i*i);
    }
}