#include<stdio.h>
#include<string.h>

typedef struct sinhVien{
    int id;
    char name[100];
    double a, b, c, sum;
} sv;
sv s[1000], tmp;
int count = 0;

void add(){
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    while(n--){
        s[count].id = count + 1;
        getchar();
        gets(s[count].name);
        scanf("%lf%lf%lf", &s[count].a, &s[count].b, &s[count].c);
        s[count].sum = s[count].a + s[count].b + s[count].c;
        count++;
    }
}
void update(){
    int n;
    scanf("%d", &n);
    getchar();
    gets(s[n-1].name);
    scanf("%lf%lf%lf", &s[n-1].a, &s[n-1].b, &s[n-1].c);
    s[n-1].sum = s[n-1].a + s[n-1].b + s[n-1].c;
}
void display(){
    for(int i = 0; i < count; i++){
        for(int j = i + 1; j < count; j++){
            if(s[i].sum > s[j].sum){
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
    for(int i = 0; i < count; i++){
        printf("%d %s %.1lf %.1lf %.1lf\n", s[i].id, s[i].name, s[i].a, s[i].b, s[i].c);
    }
}

int main(){
    int n;
    while(1){
        scanf("%d", &n);
        if(n == 1)
            add();
        else if (n == 2)
        {
            update();
        }else{
            display();
        }
        
        if(n == 3) break;
    }
}