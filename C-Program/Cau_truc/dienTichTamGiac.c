#include<stdio.h>
#include<math.h>

typedef struct tamGiac{
    double x, y;
} tg;
void check(tg a, tg b, tg c){
    float tmp = a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x *(a.y - b.y);
    if((int)tmp == 0)
    {
        printf("INVALID\n");
    }
    else{
        double ab, ac, bc, S;
        ab = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
        bc = sqrt(pow((c.x - b.x), 2) + pow((c.y - b.y), 2));
        ac = sqrt(pow((c.x - a.x), 2) + pow((c.y - a.y), 2));
        S = sqrt((ab + ac + bc)*(ab + ac - bc)*(ab + bc - ac)*(bc + ac - ab))/4;
        printf("%.2lf\n", S);
    }
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        tg a, b, c;
        scanf("%lf%lf%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
        check(a, b , c);
    }
}