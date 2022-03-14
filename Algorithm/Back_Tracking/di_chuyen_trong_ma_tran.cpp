#include<iostream>

/* https://www.geeksforgeeks.org/count-possible-paths-top-left-bottom-right-nxm-matrix/?ref=rp */

// int res(int m, int n){
//     if(m == 1 || n == 1)
//         return 1;
//     return res(m-1, n) + res(m, n-1);
// }
int numberOfPaths(int m, int n)
{
    
    int dp[n] = { 1 };
    dp[0] = 1;
 
    for (int i = 0; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[j] += dp[j - 1];
        }
    }
 
    return dp[n - 1];
}
int main(){
    int test;
    std::cin >> test;
    while(test--){
        int m, n;
        std::cin >> m >> n;
        int a[m][n];
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++){
                std::cin >> a[i][j];
            }
        std::cout << numberOfPaths(m, n) << std::endl;
    }
}