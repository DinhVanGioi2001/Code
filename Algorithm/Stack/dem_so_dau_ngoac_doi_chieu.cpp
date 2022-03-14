// #include<iostream>
// #include<string>
// #include<stack>

// int main(){
//     int test;
//     std::cin >> test;
//     while(test--){
//         std::string s;
//         std::cin >> s;
//         std::stack<char> stack;
//         //kiem tra xem neu co cap ngoac dung thi triet tieu con khong day vao stack
//         for(int i = 0; i < s.size(); i++){
//             if(s[i] == ')' && !stack.empty()){
//                 if(stack.top() == '(') stack.pop();
//                 else stack.push(s[i]);
//             }else stack.push(s[i]);
//         }
//         /*  dem so ngoac '(' 
//             vd nhu )(())(((
//                 se co 3 ngoac ( va lay chia du cho 2 de quay nguoc 1 ngoan lai
//         */
//         int n = 0, len = stack.size();
//         while(!stack.empty() && stack.top() == '('){
//             n++;
//             stack.pop();
//         }
//         int res = len/2 + n % 2;
//         std::cout << res << std::endl;
//     }
// }

//Cach 2

#include<iostream>
#include<string>
#include<stack>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::string s;
        std::cin >> s;
        std::stack<char> stack;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == ')' && stack.empty()) stack.push(s[i]);
            else if(s[i] == ')'){
                if(stack.top() == '(') stack.pop();
                else stack.push(s[i]);
            }
        }
        int d1 = 0 , d2 = 0;
        while(stack.size() > 0){
            if(stack.top() == '(') d1++;
            else d2++;
            stack.pop();
        }
        int res = d1/2 + d2/2 + d1%2 + d2 % 2;
        std::cout << res << '\n';
    }
}