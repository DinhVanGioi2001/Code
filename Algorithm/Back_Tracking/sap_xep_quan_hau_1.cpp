#include<iostream>

int n;
bool h[11], c[11], nguoc[22], xuoi[22];

void Try(int i, int &res){
    for(int j = 1; j <= n; j++){
        if(!h[j] && !c[j] && !nguoc[i - j + n] && !xuoi[i + j - 1]){
            h[j] = c[j] = nguoc[i - j + n] = xuoi[i + j - 1] = true;    
            if(i == n){
                res++;
            }else Try(i+1, res);
            h[j] = c[j] = nguoc[i - j + n] = xuoi[i + j - 1] = false;
        }
    }
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::cin >> n;
        int res = 0;
        Try(1, res);
        std::cout << res << std::endl;
    }
}