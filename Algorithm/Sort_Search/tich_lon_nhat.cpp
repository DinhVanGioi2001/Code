#include<iostream>
#include<algorithm>
typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, m;
        std::cin >> n >> m;
        ll a[n], b[m];
        for(int i = 0; i < n; i++) std::cin >> a[i];
        for(int i = 0; i < m; i++) std::cin >> b[i];
        std::sort(a, a + n);
        std::sort(b, b + m);
        ll tmp = a[n-1] * b[0];
        std::cout << tmp << std::endl;
    }
}