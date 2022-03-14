#include<iostream>
#include<vector>
#include<string>

int n, a[10][10]; bool ok;
std::vector<std::string> res;

void init(){
	std::cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) std::cin >> a[i][j];
}

void display(){
	for(int i = 0; i < res.size(); i++) std::cout << res[i] << " ";
	std::cout << std::endl;
}

void Try(std::string s, int i, int j){
	if(i == 0 && j == 0 && a[i][j] == 0){
		ok = false;
		return;
	}
	if(i == n-1 && j == n-1 && a[i][j]){
		ok = true;
		res.push_back(s);
	}
	if(i < n-1 && a[i+1][j]) Try(s + "D", i+1, j);
	if(j < n-1 && a[i][j+1]) Try(s + "R", i , j+1);
	if((i < n-1 && j < n-1 && a[i][j] == 0) || i > n-1 || j > n -1) return;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		init();
		ok = false;
		res.clear();
		Try("", 0, 0);
		if(!ok) std::cout << -1 << std::endl;
		else display();
	}
}
