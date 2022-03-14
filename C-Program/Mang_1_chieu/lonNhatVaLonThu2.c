#include <stdio.h>
#include<limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int largest1, largest2, i;
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    largest1 = INT_MIN;
    for (i = 0; i < n; i++) {
        if (a[i] > largest1) {
            largest1 = a[i];
        }
    }
    largest2 =INT_MIN;
    for (i = 1; i < n; i++) {
        if (a[i] > largest2 && a[i] < largest1)
            largest2 = a[i];
    }
    printf("%d %d", largest1, largest2);
}