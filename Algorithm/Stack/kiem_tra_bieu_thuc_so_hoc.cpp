#include<iostream>
#include<string>
#include<stack>

int main(){
    int test;
    std::cin >> test;
    std::cin.ignore();
    while(test--){
        std::string s;
        std::getline(std::cin, s);
        bool ok;
        std::stack<char> stack;
        for(int i = 0; i < s.size(); i++)  
            if(s[i] == ')'){
                ok = true;
                char top = stack.top(); stack.pop();
                while(top != '('){
                    if(top == '+' || top == '-' || top == '*' || top == '/')
                        ok = false;
                    top = stack.top(); stack.pop();
                }
                if(ok) break;
            }else stack.push(s[i]);
        if(ok) std::cout << "Yes";
        else std::cout << "No";
        std::cout << "\n";
    }
}