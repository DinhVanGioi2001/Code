#include<stdio.h>
#include<math.h>

int main(){
    int r1, r2, r3, c1, c2, c3;
    scanf("%d%d", &r1, &c1);
    scanf("%d%d", &r2, &c2);
    scanf("%d%d", &r3, &c3);
    long long sum = r1*c1 + r2*c2 + r3*c3;
    long long tmp = sqrt(sum);
    if(tmp * tmp == sum) printf("YES");
    else printf("NO");
}