#include<iostream>
#include<string>
#include<stack>

int main(){
    int Q, n;
    std::cin >> Q;
    std::stack<int> stack;
    std::string s;
    while(Q--){
        std::cin >> s;
        if(s == "PUSH"){
            std::cin >> n;
            stack.push(n);
        }else if(s == "POP" && stack.size() > 0) stack.pop();
        else if(s == "PRINT"){
            if(stack.size() == 0){
                std::cout << "NONE" << std::endl;
                continue;
            } 
            std::cout << stack.top() << std::endl;
        }
    }
}