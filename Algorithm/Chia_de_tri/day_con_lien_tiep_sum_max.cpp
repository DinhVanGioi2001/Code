#include<iostream>

void solution(int n, int a[]){
    int max = a[0];; bool check = false;
    for(int i = 0; i < n; i++){
        if(a[i] > 0) check = true;
        if(max < a[i]) max = a[i];
    }
    if(!check) std::cout << max;
    else{
        int sum = 0, res = a[0];
        for(int i = 0; i < n; i++){
            if(sum + a[i] <= 0){
                sum = 0;
                continue;
            }
            sum += a[i];
            if(res < sum) res = sum;
        }
        std::cout << res;
    }
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n;
        std::cin >> n;
        int a[n];
        for(int i = 0;i < n; i++) std::cin >> a[i];
        solution(n, a);
        std::cout << std::endl;
    }
}