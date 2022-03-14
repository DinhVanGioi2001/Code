// #include<iostream>
// #include<vector>
// #include<queue>
// typedef long long ll;
// ll b[10001] = {0};
// ll nhiPhan(int n){
//     std::vector<int> a;
//     while(n > 0){
//         a.push_back(n%2);
//         n/=2;
//     }
//     ll res = 0;
//     for(int i = a.size() - 1; i >= 0; i--){
//         res = res * 10 + a[i];
//     }
//     return res;
// }
// void pre(int n){
//     b[0] = 0; b[1] = 1;
//     for(int i = 2; i <=n; i++){
//         b[i] = nhiPhan(i);
//     }
// }

// int main(){
//     int test;
//     std::cin >> test;
//     pre(10000);
//     while(test--){
//         int n;
//         std::cin >> n;
//         std::queue<int> queue;
//         for(int i = 1; i <= n; i++){
//             std::cout << b[i] << " ";
//         }
//         std::cout << std::endl;
//     }
// }
/* Cach 2: su dung hang doi
    vd 1 : 1
        2 : 10
        3 : 11
        4 : 100
        5 : 101
    ==> chi can them 1 hoac 0 vao sau chuoi de tao ra duoc so nhi phan tiep theo
*/
#include<iostream>
#include<string>
#include<queue>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::queue<std::string> q;
        int n;
        std::cin >> n;
        q.push("1");
        while(n--){
            //them chuoi vao va xoa chuoi cu di
            std::string s1 = q.front();
            q.pop();
            std::cout << s1 << " ";
            std::string s2 = s1;
            //them 0 hoac 1 vao hang doi
            q.push(s1.append("0"));
            q.push(s2 + "1");
        }
        std::cout << "\n";
    }
}