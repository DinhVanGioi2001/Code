#include<iostream>

int greedy(int n, int &res){
    int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int k = 10;
    for(int i = 0; i < k; i++){
        res += n/a[i];
        n %= a[i];
    }
    return res;
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, res = 0;
        std::cin >> n;
        std::cout << greedy(n, res) << std::endl;
    }
}