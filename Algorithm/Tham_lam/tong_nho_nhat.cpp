#include<iostream>
#include<algorithm>

#define ll long long

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n;
        std::cin >> n;
        ll a[n];
        for(int i= 0; i < n; i++) std::cin >> a[i];
        std::sort(a, a+n);
        ll num1 = 0, num2 = 0;
        for(int i = 0; i < n; i++){
            if(i%2 == 0) num1 = num1*10 + a[i];
            else num2 = num2 * 10 + a[i];
        }
        ll sum = num1 + num2;
        std::cout << sum << std::endl;
    }
}