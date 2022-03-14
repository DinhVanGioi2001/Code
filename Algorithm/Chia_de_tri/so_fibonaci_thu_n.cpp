#include<iostream>
typedef long long ll;
#define MOD 1000000007

void multilMaxtrix(ll F[2][2], ll M[2][2]){
    ll x = (F[0][0]*M[0][0] % MOD + F[0][1]*M[1][0] % MOD) % MOD;
    ll y = (F[0][0]*M[0][1] % MOD + F[0][1]*M[1][1] % MOD) % MOD;
    ll z = (F[1][0]*M[0][0] % MOD + F[1][1]*M[1][0] % MOD) % MOD;
    ll t = (F[1][0]*M[0][1] % MOD + F[1][1]*M[1][1] % MOD) % MOD;
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = t;
}
void power(ll F[2][2], int n){
    if(n <= 1) return;
    ll M[2][2] = {{1, 1}, {1, 0}};
    power(F, n/2);
    multilMaxtrix(F, F);
    if(n % 2)  
        multilMaxtrix(F, M);
}

ll fibonaci(int n){
    ll F[2][2] = {{1, 1}, {1, 0}};
    if(n == 0) return 0;
    power(F, n-1);
    return F[0][0];
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n;
        std::cin >> n;
        ll res = fibonaci(n);
        std::cout << res << "\n";
    }
}