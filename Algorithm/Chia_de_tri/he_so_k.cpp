#include<iostream>
#include<cstring>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int k;
        std::string a, b;
        std::cin >> k >> a >> b;
        // neu 2 xau khong bang nhau thi cong '0' vao truoc
        while(a.size() > b.size()) b = '0' + b;
        while(a.size() < b.size()) a = '0' + a;
        //khoi tao bien nho = 0
        int len = a.size(), nho = 0, so;
        std::string res = "";
        for(int i = len - 1; i >= 0; i--){
            // cong 2 so nhu binh thuong
            so = int(a[i] - '0') + int(b[i] - '0') + nho;
            res = char(so % k + '0') + res; //chuyen ve thanh ki tu va cong voi ket qua
            nho = so / k;
        }
        // nheu nho lon hon thi cong vao phia truoc no
        if(nho > 0) res = char(nho + '0') + res;
        std::cout << res << "\n";
    }
}