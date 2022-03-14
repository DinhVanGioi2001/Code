/* https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/ 
    
*/
#include<iostream>
#include<string>
#include<string.h>

int F[1005][1005];
/* 
    vd: A G G T A B
    G   0 0 0 0 0 0
    X   0 1 1 0 0 0
    T   0 1 1 0 0 0
    X   0 1 1 2 0 0
    A   0 1 1 2 0 0
    Y   1 1 1 2 3 0
    B   1 1 1 2 3 0
        1 1 1 2 3 4
    p/tu [a][y] = 1 la do [a]=[a]
*/
int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::string s1, s2;
        std::cin >> s1 >> s2;
        int res = 0;
        // memset(F, 0, sizeof(F)); //khoi tao cac phan tu cua mang F = 0;
        for(int i = 1; i <= s1.size(); i++)
            for(int j = 1; j <= s2.size(); j++){
                if(s1[i-1] == s2[j-1]) //neu 2 phan tu giong nhau thi cong 1 vao i, j;
                    F[i][j] = 1 + F[i-1][j-1];
                else F[i][j] = std::max(F[i-1][j], F[i][j-1]);
                /*neu khong co cap nao trung nhau thi lay gia tri max tu chuoi phia truoc*/
                res = std::max(res, F[i][j]);
            }
        std::cout << res << std::endl;
    }
}