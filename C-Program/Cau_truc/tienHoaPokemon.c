#include<stdio.h>

struct Pokemon{
    char name[100];
    int req, total;
    int count;
};
typedef struct Pokemon p;

int main(){
    int n, sum = 0, max = 0;
    scanf("%d", &n);
    int i;
    p s[n];
    for(i = 0; i < n; i++){
        s[i].count = 0;
        scanf("%s", &s[i].name);
        scanf("%d %d", &s[i].req, &s[i].total);
        while(s[i].req <= s[i].total){
            s[i].total -= s[i].req;
            s[i].total += 2;
            s[i].count++;
        }
        sum += s[i].count;
    }
    printf("%d\n", sum);
    for(i = 0; i < n; i++){
        if(s[i].count > max) max = s[i].count;
    }
    for(i = 0; i < n; i++){
        if(s[i].count == max){
            printf("%s", s[i].name);
            break;
        }
    }
}