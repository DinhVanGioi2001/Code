#include<iostream>
#include<algorithm>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n;
        std::cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) std::cin >> a[i];
        std::sort(a, a + n);
        int tmp = a[0], count = 0;
        for(int i = 0; i < n; i++){
            while(tmp < a[i]){
                tmp++; count++;
            }
            if(tmp == a[i]) tmp++;
        }
        std::cout << count << std::endl;
    }
}