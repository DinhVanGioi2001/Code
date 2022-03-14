#include<iostream>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, x;
        std::cin >> n >> x;
        int a[n], tmp = -1;
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
            if(x == a[i]) tmp = x;
        }
        if(tmp != -1)
            std::cout << 1 << std::endl;
        else std::cout << -1 << std::endl;
    }
}