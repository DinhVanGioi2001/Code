/* 
    vd n = 4 k = 8
    1213121 4 1213121 lenght(VT trung tâm) là 2^n -1 = 8
    nếu n = 1 thì in ra 1
    nếu length = k in ra n
    nếu k > length thì lấy đối xứng qua vttt theo công thứ k = n - (k-n);
    và giảm n đi 1 đơn vị và lấy lại vj trí trung tâm bằng cách chia length/2
*/

#include<iostream>
typedef long long ll;

ll solution(ll n){
    if(n==0) return 1;
    if(n==1) return 2;
    ll tmp = solution(n/2);
    if(n%2) return 2*tmp*tmp;
    return tmp*tmp;
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n, k;
        std::cin >> n >> k;
        ll length = solution(n)/2;
        while(1){
            if(n == 1){
                std::cout << 1;
                break;
            }
            if(length == k){
                std::cout << n;
                break;
            }
            if(k > length) k = length - (k - length); // lay doi xung
            n--; //giam n di 1 don vi
            length /= 2; //lay lai vi tri trung tam
        }
        std::cout << std::endl;
    }
}