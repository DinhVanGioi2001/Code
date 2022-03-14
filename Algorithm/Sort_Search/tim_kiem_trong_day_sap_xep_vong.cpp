#include<iostream>
typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n, x;
        std::cin >> n >> x;
        ll a[n+2], tmp;
        for(int i = 1; i <= n; i++){
            std::cin >> a[i];
            if(x == a[i]) tmp = i;
        }
        std::cout << tmp << std::endl;
    }
}