#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;


int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n;
        std::cin >> n;
        std::vector<int> v;
        while(n > 0){
            v.push_back(n%10);
            n/=10;
        }
        std::reverse(v.begin(), v.end());
        int vt = v.size();
        for(int i = 0; i < v.size(); i++)
            if(v[i] >= 2){
                vt = i; break;
            }
        for(int i = vt; i < v.size(); i++)
            v[i] = 1;
        ll res = 0, s = 1;
        for(int i = v.size() - 1; i >= 0; i--){
            res += v[i] * s;
            s *= 2;
        }
        std::cout << res << "\n";
    }
}