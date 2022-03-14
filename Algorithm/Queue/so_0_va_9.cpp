#include<bits/stdc++.h>
#define MAX_COUNT 10000

std::vector<std::string> myVector;
void solution(){
    std::queue<std::string> q;
    q.push("9");
    for(int count = MAX_COUNT; count > 0; count--){
        std::string s1 = q.front();
        q.pop();
        myVector.push_back(s1);
        std::string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("9"));
    }
}
std::string result(int n){
    for(int i = 0; i < myVector.size(); i++)
        if(atoi(myVector[i].c_str())%n== 0) return myVector[i];
}
int main(){
    int test;
    std::cin >> test;
    solution();
    while(test--){
        int n;
        std::cin >> n;
        std::cout << result(n) <<"\n";
    }
}