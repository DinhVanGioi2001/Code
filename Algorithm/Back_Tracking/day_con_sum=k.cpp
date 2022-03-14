#include<iostream>
#include<vector>
#include<algorithm>

int n, k, a[100], b[100];
std::vector< std::vector<int> > myvector;

void init(){
	std::cin >> n >> k;
	for(int i = 0; i < n; i++) std::cin >> a[i];
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n-1){
			int sum = 0;
			for(int l = 0; l < n; l++)
				if(b[l])
					sum += a[l];
			if(sum == k){
				std::vector<int> x;
				for(int i = 0; i < n; i++){
					if(b[i]) x.push_back(a[i]);
				}
				myvector.push_back(x);
			}
		}else Try(i+1);
	}
}
int main(){
	int test;
	std::cin >> test;
	while(test--){
		init();
		myvector.clear();
		std::sort(a, a + n);
		Try(0);
		if(myvector.size() == 0) std::cout << -1 << std::endl;
		else{
			std::sort(myvector.begin(), myvector.end());
			for(int i = 0; i < myvector.size(); i++){
				std::cout << "[";
				for(int j = 0; j < myvector[i].size() - 1; j++){
					std::cout << myvector[i][j] << " ";
				}
				std::cout << myvector[i][myvector[i].size() - 1] << "]" << " ";
			}
			std::cout << std::endl;
		}
	}
}
