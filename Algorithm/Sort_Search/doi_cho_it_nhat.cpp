#include<iostream>
#include<algorithm>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n;
        std::cin >> n;
        int a[n], b[n], count = 0;
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
            b[i] = a[i];
        }
        std::sort(a, a + n);
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                count++;
            }
        }
        std::cout << count/2 << '\n';
    }
}