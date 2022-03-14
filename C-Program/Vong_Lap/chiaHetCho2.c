#include <stdio.h>
#include<math.h>

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long n;
        scanf("%ld", &n);
        long count = 0;
        if (n % 2 != 0)
            printf("0\n");
        else{
            int i;
            for (i = 1; i <= sqrt(n); i++){
                if (n % i == 0){ //vd: 16 = 1 2 4 8 16
                    if (i % 2 == 0) //2 %2 | 4 % 2
                        count++;
                    if ((n / i) % 2 == 0) //16/2 = 8 % 2| 16 /4=4%2
                        count++;
                }
            }
            i--; // vd 16 = 1 2 4 8 16 thi so 4 duoc cong vao 2 lan => giam di 1 lan
            if ((i * i == n) && (i % 2 == 0))
                count--;
        }
        if (count != 0)
            printf("%ld\n", count);
    }
}