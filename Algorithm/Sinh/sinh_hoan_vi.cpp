#include<iostream>
#define max 10

int n, a[max];

void init(){
	std::cin >> n;
	for(int i = 1; i <= n; i++) a[i] = i;
}

bool check(){
	for(int i = n; i > 0; i--)
		if(a[i] != n - i + 1) return false;
	return true;
}
void swap(int &x, int &y){
	int tmp = x;
	x = y;
	y = tmp;
}
void solution(){
	int i = n-1;
	while(i > 0 && a[i] > a[i + 1]) i--;
	if(i > 0){
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i] , a[j]);
		int k = i +1, r = n;
		while(k <= r){
			swap(a[k], a[r]);
			k++; r--;
		}
	}
}

void display(){
	for(int i = 1; i <= n; i++) std::cout << a[i];
	std::cout << " ";
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		init();
		display();
		while(!check()){
			solution();
			display();
		}
		std::cout << std::endl;
	}
}