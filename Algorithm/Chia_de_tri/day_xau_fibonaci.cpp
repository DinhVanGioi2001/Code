/* 
    vd: g(n) = g(n-2)+g(n-1)
    g(1) = A = 1
    g(2) = B = 1
    g(3) = g1 + g2 = AB = 2
    g(4) = g2 + g3 = BAB = 3
    g(5) = g3 + g4 = ABBAB = AB + BAB = 5
    xét i <= F(n-2) hay không
    nếu có thì xét trong F(n-2) => giảm n đi 2 đơn vị để xét trong đoạn F(n-2)
    nếu không thì xét trong F(n-1) => giảm n đi 1 đơn vịA
*/
#include<iostream>
typedef long long ll;

ll F[93];
void solution(){
    ll n, i;
    std::cin >> n >> i;
    while(n > 2){
        if(i <= F[n-2]) n-=2;
        else{
            i -= F[n-2];
            n -= 1;
        }
    }
    if(n==1) std::cout << "A";
    else std::cout << "B";
    std::cout << std::endl;
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        F[1] = F[2] = 1;
        for(int i = 3; i < 93; i++)
            F[i] = F[i-1] + F[i-2];
        solution();
    }
}