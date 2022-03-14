#include<iostream>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n;
        std::cin >> n;
        int a[n], res = 0;
        for(int i = 1; i <= n; i++){
            std::cin >> a[i];
            if(a[i] == 0) res++;
        }
        std::cout << res << std::endl;
    }
}