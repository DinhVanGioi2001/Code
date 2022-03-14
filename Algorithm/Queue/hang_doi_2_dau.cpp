#include<iostream>
#include<deque>
#include<string>

int main(){
    int test;
    std::cin >> test;
    std::deque<int> dq;
    while(test--){
        std::string s;
        std::cin >> s;
        if(s == "PUSHFRONT"){
            int n; std::cin >> n;
            dq.push_front(n);
        }else if(s == "PRINTFRONT")
            (dq.size() > 0)?std::cout << dq.front() << "\n":std::cout << "NONE\n";
        else if(s == "POPFRONT" && dq.size()> 0) dq.pop_front();
        else if(s == "PUSHBACK"){
            int x; std::cin >> x;
            dq.push_back(x);
        }else if(s == "PRINTBACK")
            (dq.size() > 0)?std::cout << dq.back() << "\n":std::cout << "NONE\n";
        else if(s == "POPBACK" && dq.size() > 0) dq.pop_back();
    }
}