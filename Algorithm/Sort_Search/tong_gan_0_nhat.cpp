#include<iostream>
#include<algorithm>
typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n;
        std::cin >> n;
        ll a[n];
        for(int i = 0; i <n; i++) std::cin >> a[i];
        int res = a[0] + a[1];
        for(int i = 0; i < n-1; i++)
            for(int j = i + 1; j < n; j++){
                if(std::abs(a[i] + a[j]) < std::abs(res))
                    res = a[i] + a[j];
            }
        std::cout << res << std::endl;
    }
}