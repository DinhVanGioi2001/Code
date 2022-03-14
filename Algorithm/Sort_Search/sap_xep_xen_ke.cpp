#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, tmp;
        std::cin >> n;
        std::vector<int> a;
        for(int i = 0; i < n; i++){
            std::cin >> tmp;
            a.push_back(tmp);
        }
        std::sort(a.begin(), a.end());
        int i, j;
        for(i = 0, j = a.size() - 1; i < j; i++, j--){
            std::cout << a[j] << " " << a[i] << " ";
        }
        if(i == j) std::cout << a[i];
        std::cout << std::endl;
    }
}