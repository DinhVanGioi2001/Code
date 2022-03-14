#include<iostream>
#include<algorithm>
typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int m, n, k;
        std::cin >> m >> n >> k;
        int a[m], b[n]; 
        ll c[m+n], s = 0;
        for(int i = 0; i < m; i++){
            std::cin >> a[i];
            c[s] = a[i];
            s++;
        }
        for(int i = 0; i < n; i++){
            std::cin >> b[i];
            c[s] = b[i];
            s++;
        }
        std::sort(c, c + (m+n));
        std::cout << c[k-1] << std::endl;
    }
}