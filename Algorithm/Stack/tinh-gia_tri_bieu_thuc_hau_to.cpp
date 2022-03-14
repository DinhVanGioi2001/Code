#include<iostream>
#include<string>
#include<stack>
typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::string s;
        std::cin >> s;
        std::stack<ll> stack;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
                ll a = stack.top(); stack.pop();
                ll b = stack.top(); stack.pop();
                ll sum;
                if(s[i] == '+') sum = b + a;
                else if(s[i] == '-') sum = b - a;
                else if(s[i] == '*') sum = b * a;
                else if(s[i] == '/') sum = b / a;
                else if(s[i] == '%') sum = b % a;
                else if(s[i] == '^'){
                    sum = b;
                    for(int i = 1; i < a; i++){
                        sum *= b;
                    }
                }
                stack.push(sum);
            }else stack.push(ll(s[i] - '0'));
        }
        std::cout << stack.top() << "\n";
    }
}