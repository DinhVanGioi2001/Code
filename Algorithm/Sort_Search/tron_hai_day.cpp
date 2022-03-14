#include<iostream>
#include<algorithm>
typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, m, tmp;
        std::cin >> n >> m;
        ll a[n+m];
        for(int i = 0; i < n + m; i++){
            std::cin >> a[i];
        }
        std::sort(a, a + (n+m));
        for(int i = 0; i < n + m; i++) std::cout << a[i] << " ";
        std::cout << std::endl;
    }
}