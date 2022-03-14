#include<stdio.h>
#include<math.h>

int checkChanLe(int n){
    int countLe = 0, countChan = 0;
    while(n > 0){
        int tmp = n % 10;
        if(tmp % 2 == 0) countChan++;
        else countLe++;
        n /= 10;
    }
    if(countLe == countChan) return 1;
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int a = pow(10, n - 1);
    int b = pow(10, n), count = 1, i;
    for(i = a; i <= b; i++)
        if(checkChanLe(i)){
            if(count % 10 == 0){
                printf("%d\n", i);
                count++;
            }else{
                printf("%d ", i);
                count++;
            }
        }
}