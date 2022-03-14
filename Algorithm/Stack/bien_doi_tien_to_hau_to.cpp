#include<iostream>
#include<stack>
#include<string>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::string s;
        std::cin >> s;
        std::stack<std::string> stack;
        for(int i = s.size(); i >= 0; i--){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
                std::string first = stack.top(); stack.pop();
                std::string second = stack.top(); stack.pop();
                std::string tmp = first + second + s[i];
                stack.push(tmp);
            }else stack.push(std::string(1, s[i]));
        }
        std::cout << stack.top() << "\n";
    }
}