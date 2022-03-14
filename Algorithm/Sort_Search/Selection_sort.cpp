#include<iostream>

int main(){
	int n, b = 0;
	std::cin >> n; 
	int a[n];
	for(int i = 0; i < n; i++) std::cin >> a[i];
	for(int i = 0; i < n-1; i++){
		int min = i;
		for(int j = i+1; j < n; j++)
			if(a[j] < a[min])
				min = j;
		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
		std::cout << "Buoc " << ++b << ": ";
		for(int i1 = 0; i1 < n; i1++) std::cout << a[i1] << " ";
		std::cout << std::endl;
	}
}