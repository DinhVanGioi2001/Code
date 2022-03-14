#include<iostream>

void solution(){
	int n, k;
	std::cin >> n >> k;
	int a[k + 1];
	for(int i = 1; i <= k; i++) std::cin >> a[i];
	// i chay tu k -> 1: a[i] != n - k + i -> a[i]++ else i-- => cac ptu sau + 1
	int i = k;
	while( i > 0 && a[i] == n-k+i) i--;
	if(i > 0){
		a[i]++;
		for(int j = i+1; j <= k; j++){
			a[j] = a[j-1] + 1;
		}
		for(int i = 1; i <= k; i++) std::cout << a[i] << " ";
	}else{
		for(int i = 1; i <= k; i++) std::cout << i <<" ";
	}
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		solution();
		std::cout << std::endl;
	}
}
