/* 
cho n ki tu
VD: aaaabbb = a b a b a b a
    neu n%2 == 0 => d <= n - d >> thoa man
    neu n%2 == 1 => d <= n/2+1 >>thoa man
*/
#include<iostream>
#include<string>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::string s;
        std::cin >> s;
        int arr[200] = {0}, temp = 0;
        for(int i = 0; i < s.size(); i++){
            arr[s[i]]++; //tang gia tri cua ki tu s[i] len 1 don vi
            if(temp < arr[s[i]]) temp = arr[s[i]]; //lay max cua ki tu xuat hien nhieu nhat
        }
        if(s.size()%2 == 0 && temp <= s.size() - temp) std::cout << "1" << std::endl; //n chan
        else if(s.size()%2 == 1 && temp <= s.size()/2 + 1) std::cout << "1" << std::endl; // n le
        else std::cout << "-1" << std::endl;
    }
}