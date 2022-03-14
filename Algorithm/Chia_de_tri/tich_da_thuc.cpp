#include<iostream>

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, m;
        std::cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            std::cin >> b[i];
        }
        int *res = new int[m+n-1];
        for(int i = 0; i < m+n-1; i++)
            res[i] = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                res[i+j] += a[i]*b[j];
            }
        }
        for(int i = 0; i < m+n-1; i++)
            std::cout << res[i] << " ";
        std::cout << "\n";
    }
}
