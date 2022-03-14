#include<stdio.h>
#include<math.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        double a, b, c, d;
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
        double res1 = (c - a) * (c - a);
        double res2 = (d - b) * (d - b);
        double res = sqrt(res1+res2);
        printf("%.4lf\n", res);
    }
}