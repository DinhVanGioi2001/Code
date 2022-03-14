#include<iostream>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, x;
        std::cin >> n >> x;
        int a, count = 0;
        for(int i = 0; i < n; i++){
            std::cin >> a;
            if(a == x) count++;
        }
        if(count)
            std::cout << count << std::endl;
        else std::cout << -1 << std::endl;
    }
}