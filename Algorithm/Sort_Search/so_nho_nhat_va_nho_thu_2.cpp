#include<iostream>
#include<algorithm>
typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n;
        std::cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++) std::cin >> a[i];
        std::sort(a, a + n);
        int tmp = a[0], tmp2 = -1;
        for(int i = 1; i < n; i++){
            if(a[i] > tmp){
                tmp2 = a[i];
                break;
            }
        }
        if(tmp2 != -1)
            std::cout << tmp << " " << tmp2 << std::endl;
        else std::cout << -1 << std::endl;
    }
}