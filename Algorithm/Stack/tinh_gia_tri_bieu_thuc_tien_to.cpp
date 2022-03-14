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
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
                ll first = stack.top(); stack.pop();
                ll second = stack.top(); stack.pop();
                ll tmp;
                if(s[i] == '+') tmp = first + second;
                else if(s[i] == '-') tmp = first - second;
                else if(s[i] == '*') tmp = first * second;
                else if(s[i] == '/') tmp = first / second;
                else if(s[i] == '%') tmp = first % second;
                else if(s[i] == '^'){
                    tmp = first;
                    for(int i = 1; i < second; i++)
                        tmp *= first;
                }
                stack.push(tmp);
            }else stack.push(ll(s[i] - '0'));
        }
        std::cout << stack.top() << "\n";
    }
}