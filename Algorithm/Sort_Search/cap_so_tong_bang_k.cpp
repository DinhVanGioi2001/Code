#include<iostream>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, k;
        std::cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) std::cin >> a[i];
        int count = 0;
        for(int i = 0; i < n-1; i++)
            for(int j = i + 1; j < n; j ++){
                if(a[i] + a[j] == k) count++;
            }
        std::cout << count << std::endl;
    }
}