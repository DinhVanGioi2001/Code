#include<iostream>
#include<cmath>


int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, x;
        std::cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++) std::cin >> a[i];
        for(int i = 1; i < n; i++){
            int res = std::abs(a[i] - x);
            int j = i-1;
            if(std::abs(a[j] - x) > res){
                int tmp = a[i];
                while(std::abs(a[j] - x) > res && j >= 0){
                    a[j+1] = a[j];
                    j--;
                }
                a[j + 1] = tmp;
            }
        }
        for(int i = 0; i < n; i++) std::cout << a[i] << " ";
        std::cout << std::endl;
    }
}