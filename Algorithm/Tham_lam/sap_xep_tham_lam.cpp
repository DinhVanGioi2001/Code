#include<iostream>
#include<vector>
#include<algorithm>

typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, k, check = 1;
        std::cin >> n;
        std::vector<int> a;
        std::vector<int> b;
        for(int i = 0; i < n; i++){
            std::cin >> k;
            a.push_back(k);
            b.push_back(k);
        }
        // if(n%2 == 0) std::cout << "No";
        std::sort(b.begin(), b.end());
        for(int i= 0; i < n ; i++)
            if(a[i] != b[i] && a[i] != b[n-i-1]){
                check = 0;
                break;
            }
        if(check) std::cout << "Yes";
        else std::cout << "No";
        std::cout << std::endl;
    }
}