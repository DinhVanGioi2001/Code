/* 
y tuong bai toan
    -Vi ngay chu nhat khong mua duoc hang nen se lay luong thuc cac ngay truoc bu vao
    -Nen neu tong so luong thuc can dung  > so luong thuc mua trong cac ngay con lai
    => chet doi
    nguoc lai tinh so ngay can mua sao cho du luong thuc
*/
#include<iostream>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, s, m;
        std::cin >> n >> s >> m;
        if(s*m > (s-s/7)*n) std::cout << -1;
        else{
            for(int i = 1; i <= s-s/7; i++){
                if(s*m <= n*i){
                    std::cout << i;
                    break;
                }
            }
        }
        std::cout << std::endl;
    }
}