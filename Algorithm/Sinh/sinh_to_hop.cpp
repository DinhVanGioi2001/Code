#include<iostream>
#define max 15

int n, k, a[max];
void init(){
	std::cin >> n >> k;
	for(int i = 1; i <= k; i++) a[i] = i;
}

bool check(){ 
	for(int i = k; i > 0; i--)
		if(a[i] != n - k + i) return false;
	return true;
}

void solution(){
	int i = k;
	while(i > 0 && a[i] == n - k + i) i--;
	if(i > 0){
		a[i]++;
		for(int j = i+1; j <= k; j++) a[j] = a[i] + j - i;
	}
}

void display(){
	for(int i = 1; i <= k; i++) std::cout << a[i];
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
