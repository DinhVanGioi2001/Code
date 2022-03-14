#include<iostream>
#include<string>
#include<queue>
typedef long long ll;

std::string solution(ll n){
    std::queue<std::string> q;
    q.push("1");
    while(q.size() > 0){
        std::string res = q.front(); q.pop();
        ll tmp = 0;
        for(int i = 0; i < res.size(); i++){
            tmp = 10*tmp + int(res[i] - '0');
        }
        tmp %= n;
        if(tmp == 0)
            return res;
        q.push(res + "0");
        q.push(res + "1");
    }
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        ll n;
        std::cin >> n;
        std::cout << solution(n) << "\n";
    }
}