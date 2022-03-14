#include<iostream>

int n, k, a[100];

void display(){
	for(int i = 1; i <= n; i++) std::cout << a[i];
	std::cout << std::endl;
}
void sinh(int &ok){
	int i = n; 
	while(i > 0 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i > 0 && a[i] == 0){
		a[i] = 1;
	}else ok = 0;
}
void next(int ok){
	while(ok){
		sinh(ok);
		int dem = 0;
		for(int i = 1; i <= n; i++){
			if(a[i] == 1) dem++;
		}
		if(dem == k){
			display();
		}
	}
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int ok = 1;
		std::cin >> n >> k;
		for(int i = 1; i <= n; i++){
			if(i > n -k) a[i] = 1;
			else a[i] = 0;
		}
		display();
		next(ok);
	}
}
