#include<iostream>
#include<stack>
#include<string>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::string s;
        std::cin >> s;
        int res = 0, n = s.size();
        std::stack<int> stack;
        stack.push(-1);
        for(int i = 0; i < n; i++){
            if(s[i] == '(') stack.push(i);
            else{
                //xoa di 1 phan tu de tinh so ngoac dung
                stack.pop();
                //vd     ()(()))))
                //t/tu   012345678  
                /* ngan xep bang -1 thi res = 1-(-1) 
                    neu khong se la i - phan tu dau cua ngan xep
                */
                if(stack.size() > 0)
                    res = std::max(res, i - stack.top());
                //truong hop ki tu dau tien la ki tu ')' thi day vao stack
                //khi do ngan xep se co phan tu dau tien bang 1;
                if(stack.size() == 0) stack.push(i);
            }
        }
        std::cout << res << std::endl;
    }
}