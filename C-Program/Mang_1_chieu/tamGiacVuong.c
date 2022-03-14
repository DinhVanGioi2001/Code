#include<stdio.h>
#include<math.h>
#define ll long long

ll isTriplet(ll a[], ll n)
{
    ll i, j;
    for(i = 0; i < n-1; i++)
        for(j = i + 1; j < n; j++)
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    for(i = 0; i < n; i++) a[i] = a[i] * a[i];
    for(i = n-1; i >= 2; i--){
        ll l = 0, r = i -1;
        while(l < r){
            if(a[l] + a[r] == a[i])
                return 1;
            (a[l] + a[r] < a[i]) ? l++ : r--;
        }
    }
    return 0;
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        ll a[n], i;
        for(i = 0; i < n; i++) scanf("%lld", &a[i]);
        isTriplet(a, n) ? printf("YES\n") : printf("NO\n");
    }
}