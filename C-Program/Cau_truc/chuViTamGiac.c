#include<stdio.h>
#include<math.h>

struct tamGiac{
    float hoanhDo, tungDo;
    float chuVi;
};
typedef struct tamGiac tg;
void check(tg a, tg b, tg c){
    float tmp = a.hoanhDo * (b.tungDo - c.tungDo) + b.hoanhDo * (c.tungDo - a.tungDo) + c.hoanhDo *(a.tungDo - b.tungDo);
    if((int)tmp == 0)
    {
        printf("INVALID\n");
    }
    else{
        float tmp, ab, bc, ac;
        tmp = pow((b.hoanhDo-a.hoanhDo), 2) + pow((b.tungDo - a.tungDo), 2);
        ab = sqrt(tmp);
        tmp = pow((c.hoanhDo-b.hoanhDo), 2) + pow((c.tungDo - b.tungDo), 2);
        bc = sqrt(tmp);
        tmp = pow((c.hoanhDo-a.hoanhDo), 2) + pow((c.tungDo - a.tungDo), 2);
        ac = sqrt(tmp);
        tg res;
        res.chuVi = (ab + ac + bc);
        printf("%.3f\n", res.chuVi);
    }
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        tg a, b, c;
        scanf("%f%f%f%f%f%f", &a.hoanhDo, &a.tungDo, &b.hoanhDo, &b.tungDo, &c.hoanhDo, &c.tungDo);
        check(a, b, c);
    }
}