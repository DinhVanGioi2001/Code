#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for(int i = 0; i < n; i++)
            std::cin >> a[i];
        int res = n;
        //2 5 7 6 9 8 4 2
        std::sort(a.begin(), a.end());
        //9 8 7 6 5 4 2 2 -> chia doi mang
        for(int i = n/2-1, j = n-1; i >= 0 && j >= n/2;){
            //neu thoa man thi giam i va j nguoc lai giam i xuong
            if(a[j] >= a[i]*2){
                res--;
                i--; j--;
            }else{
                i--;
            }
        }
        std::cout << res << "\n";
    }
}