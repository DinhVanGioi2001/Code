#include<iostream>
#include<queue>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, val = 0;
        std::queue<int> queue;
        std::cin >> n;
        while(n--){
            int s; std::cin >> s;
            if(s == 1) std::cout << queue.size() << "\n";
            else if(s == 2) (queue.size() > 0)?std::cout << "NO\n" : std::cout << "YES\n";
            else if(s == 3){
                int number2;
                std::cin >> number2;
                queue.push(number2);
            }
            else if(s == 4 && queue.size() > 0) queue.pop();
            else if(s == 5) (queue.size() > 0)?std::cout << queue.front() << "\n" : std::cout << -1 << "\n";
            else if(s == 6) (queue.size() > 0)?std::cout << queue.back() << "\n" : std::cout << -1 << "\n";
            val = s;
        }
        if(val == 3 || val == 4) std::cout << "\n";
    }
}