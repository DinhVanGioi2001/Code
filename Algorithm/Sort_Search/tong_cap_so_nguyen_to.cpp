#include<iostream>

int snt(int n){

}
int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n;
        std::cin >> n;
        bool check[n];
        for(int i = 2; i < n; i++) check[i] = true;
        for(int i = 2; i < n; i++)
            if(check[i])
                for(int j= i * 2; j < n; j += i) 
                    check[j] = false;
        int res = 0;
        for(int i = 2; i < n; i++){
            if(check[i] && check[n-i]){
                std::cout << i <<" " << n-i << std::endl;
                res = 1;
                break;
            }
        }
        if(res == 0)
            std::cout << -1 << std::endl;
    }
}