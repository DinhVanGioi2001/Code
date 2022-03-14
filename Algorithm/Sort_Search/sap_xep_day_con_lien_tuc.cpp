#include<iostream>
#include<vector>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, tmp;
        std::cin >> n;
        std::vector<int> a;
        for(int i = 0; i < n; i++){
            std::cin >> tmp;
            a.push_back(tmp);
        }
        int s = 0, r = n - 1, min, max;
        for(s = 0; s < n; s++){
            if(a[s] > a[s+1]) break;
        }
        for(r = n-1; r >= 0; r--){
            if(a[r] < a[r-1]) break;
        }
        max = a[s], min = a[s];
        for(int i = s+1; i <= r; i++){
            if(a[i] > max) max = a[i];
            if(a[i] < min) min = a[i];
        }
        for(int i = 0; i < s; i++){
            if(a[i] > min){
                s = i;
                break;
            }
        }
        for(int i = n-1; i >= r+1; i--){
            if(a[i] < max){
                r = i;
                break;
            }
        }
        std::cout << s + 1 << " " << r + 1 << std::endl;
    }
}