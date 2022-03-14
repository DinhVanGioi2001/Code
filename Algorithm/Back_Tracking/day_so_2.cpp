#include<iostream>

void Try(int a[], int n){
	if(n < 1) return;
	int res[n-1], b;
	for(int i = 0; i < n-1; i++){
		b = a[i] + a[i+1];
		res[i] = b;
	}
	Try(res, n-1);
	std::cout << "[";
	for(int i = 0; i < n-1; i++) std::cout << a[i] <<" ";
	std::cout << a[n-1] << "]" << " ";
}
/*
Try(a[], 5) a = {1 2 3 4 5}
	res[4] = {3, 5, 7, 9}
Try(a, 4) a = {3 5 7 9}
	res = {8 12 16}
Try(a, 3) a= {8 12 16}
	res = {20 28}
Try(a, 2) a= {20 28}
	res = {48}
Try(a, 1) a[ {48}
*/
int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) std::cin >> a[i];
		Try(a, n);
		std::cout << std::endl;
	}
}
