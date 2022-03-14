#include<iostream>
typedef long long ll;
#define Mod 1000000007
ll a[10][10], b[10][10], k;
int n;

void mulMaxtrix(ll x[10][10], ll y[10][10]){
    ll tmp[10][10];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ll res = 0;
            for(int h = 0; h < n; h++){
                res += (x[i][h]*y[h][j]) % Mod;
                res %= Mod;
            }
            tmp[i][j] = res;
        }
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = tmp[i][j];
}

void pow(ll a[10][10], int k){
    if(k <= 1) return;
    pow(a, k/2);
    mulMaxtrix(a, a);
    if(k % 2) mulMaxtrix(a, b);
}
void xuat(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            std::cout << a[i][j] << " ";
        std::cout << "\n";
    }
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::cin >> n >> k;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n ; j++){
                std::cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        pow(a, k);
        xuat();
    }
}