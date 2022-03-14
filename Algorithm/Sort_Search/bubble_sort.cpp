#include<iostream>
#include<vector>

void swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

int main(){
	int n, b = 1;
	std::cin >> n; 
	int a[n];
	for(int i = 0; i < n; i++) std::cin >> a[i];
	for(int i = 0; i < n-1; i++){
		bool check = false;
		for(int j = 0; j < n-i-1; j++){
			if(a[j+1] < a[j]){
				swap(a[j], a[j+1]);
				check = true;
			}
		}
		if(check == false) break;
		std::cout << "Buoc " << b++ << ": ";
		for(int k = 0; k < n; k++) std::cout << a[k] <<" ";
		std::cout << std::endl;
	}
}
