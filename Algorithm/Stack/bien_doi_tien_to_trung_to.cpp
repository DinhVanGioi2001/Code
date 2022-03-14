#include<iostream>
#include<string>
#include<stack>

int main(){
    int test;
    std::cin >> test;
    std::cin.ignore();
    while(test--){
        std::string s;
        std::cin >> s;
        std::stack<std::string> stack;
        for(int i = s.size()-1; i >=0; i--){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
                std::string first = stack.top(); stack.pop();
                std::string second = stack.top(); stack.pop();
                std::string tmp = '('+ first + s[i] + second + ')';
                stack.push(tmp);
            }else stack.push(std::string(1, s[i]));
        }
        std::cout << stack.top() << "\n";
    }
}