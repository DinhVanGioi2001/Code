#include<iostream>
typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n;
        std::cin >> n;
        ll a[n], b[n-1];
        for(int i = 0; i < n; i++) std::cin >> a[i];
        for(int i = 0; i <n-1; i++) std::cin >> b[i];
        ll res = n-1;
        for(int i = 0; i < n-1; i++){
            if(a[i] != b[i]){
                res = i;
                break;
            }
        }
        std::cout << res+1 << std::endl;
    }
}