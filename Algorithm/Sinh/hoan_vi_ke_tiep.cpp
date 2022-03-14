#include<iostream>
#define max 100

void swap(int &x, int &y){
	int tmp = x;
	x = y;
	y = tmp;
}

void solution(){
	int n;
	std::cin >> n;
	int a[n+1];
	for(int i = 1; i <= n; i++)
		std::cin >> a[i];
	int i = n;
	while(i > 0 && a[i] < a[i-1]) i--;
	if(i > 0){
		swap(a[i], a[i-1]);
		for(int j = 1; j <= n; j++) std::cout << a[j] << " ";
	}else{
		for(int j = n; j > 0; j--) std::cout << a[j] << " ";
	}
	std::cout << std::endl;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		solution();
	}
}
