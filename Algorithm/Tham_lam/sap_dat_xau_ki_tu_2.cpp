/* 
    VD: aaaabbbc voi khong cach d = 2
    => a b a b a b a c ---> cho trong can co s =(max-1)*(d-1) phan tu
    => s > s.size() - demMax thi se khong chap nhan
*/

#include<iostream>
#include<string>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int d;
        std::string s;
        std::cin >> d >> s;
        int a[200] = {0}, demMax = 0;
        for(int i = 0; i < s.size(); i++){
            a[s[i]]++;
            if(demMax < a[s[i]]) demMax = a[s[i]];
        }
        if((demMax-1)*(d-1) > (s.size() - demMax)) std::cout << -1;
        else std::cout << 1;
        std::cout << std::endl;
    }
}