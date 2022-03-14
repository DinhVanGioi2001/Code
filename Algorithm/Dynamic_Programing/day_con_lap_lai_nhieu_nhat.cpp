#include<iostream>
#include<string>
#include<cstring>

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::string s;
		std::cin >> n;
		std::cin.ignore();
		std::getline(std::cin, s);
		long long dp[n+5][n+5]; 
		std::memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++){
				if(s[i-1] == s[j-1] && i != j) dp[i][j] = 1 + dp[i-1][j-1];
				else dp[i][j] = std::max(dp[i][j-1], dp[i-1][j]);
			}
		std::cout << dp[n][n] << '\n';
	}
}