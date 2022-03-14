#include<iostream>
#include<vector>

void Try(std::vector<int> a, int n){
	std::vector<int> res;
	for(int i = 0; i < n-1; i++){
		int b = a[i] + a[i+1];
		res.push_back(b);
	}
	if(res.size() < 1) return;
	std::cout << "[";
	for(int i = 0; i < res.size() - 1; i++) std::cout << res[i] << " ";
	std::cout << res[res.size()-1] <<"]" << std::endl;
	Try(res, res.size());
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n, number;
		std::cin >> n;
		std::vector<int> a;
		for(int i = 0; i < n; i++){
			std::cin >> number;
			a.push_back(number);
		}
		std::cout << "[";
		for(int i = 0; i < a.size()-1; i++) std::cout << a[i] << " ";
		std::cout << a[a.size()-1] << "]" << "\n";
		Try(a, n);
	}
}
