#include<iostream>
#include<cstring>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::string s1, s2;
        std::cin >> s1 >> s2;
        long long p = 1, a = 0, b = 0;
        for(int i = s1.size()-1; i >= 0; i--){
            a += int(s1[i] - '0') * p;
            p *= 2;
        }
        p = 1;
        for(int i = s2.size()-1; i >= 0; i--){
            b += int(s2[i] - '0') * p;
            p *= 2;
        }
        std::cout << a*b << "\n";
    }
}