#include<iostream>

int solution(std::string s){
    int res = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 1){
            res = (res*2 + 1)%5;
        }else{
            res = (res * 2) % 5;
        }
    }
    if(res % 5 == 0) return 1;
    return 0;
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::string n;
        std::cin >> n;
        if(solution(n) == 1){
            std::cout << "YES" << "\n";
        }else{
            std::cout << "NO" << "\n";
        }
    }
}