#include<iostream>
#include<queue>
#include<string>

int main(){
    int test;
    std::cin >> test;
    std::queue<int> queue;
    while(test--){
        std::string s;
        std::cin >> s;
        if(s == "PUSH"){
            int n; std::cin >> n;
            queue.push(n);
        }else if(s == "PRINTFRONT")
            (queue.size() > 0) ? std::cout << queue.front() << "\n" : std::cout << "NONE\n";
        else if(s == "POP" && queue.size() > 0) queue.pop();
    }
}