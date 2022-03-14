#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>

int main(){
    std::string s;
    int n;
    std::stack<int> stack;
    while(std::cin >> s){
        if(s == "push"){
            std::cin >> n;
            stack.push(n);
        }else if(s == "pop") stack.pop();
        else if(s == "show"){
            std::vector<int> a;
            if(stack.size() == 0){
                std::cout << "empty";
                continue;
            }
            while(stack.size() > 0){
                a.push_back(stack.top());
                stack.pop();
            }
            std::reverse(a.begin(), a.end());
            for(int i = 0; i < a.size(); i++){
                std::cout << a[i] << " ";
                stack.push(a[i]);
            }
        }
        std::cout << std::endl;
    }

}