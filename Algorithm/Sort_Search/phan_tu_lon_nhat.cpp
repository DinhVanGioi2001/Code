#include<iostream>
#include<algorithm>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, k;
        std::cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) std::cin >> a[i];
        std::sort(a, a+n);
        for(int i = n-1; i >= n - k; i--){
            std::cout << a[i] << " ";
        }
        std::cout << std::endl;
    }
}