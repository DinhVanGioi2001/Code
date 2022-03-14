#include<iostream>

int main(){
	int n;
	std::cin >> n;
	int a[n+1], dem = 0;
	for(int i = 1; i <= n; i++) std::cin >> a[i];
	for(int i = 2; i <= n+1; i++){
		std::cout << "Buoc " << dem++ << ": ";
		for(int i1 = 1; i1 < i; i1++)std::cout << a[i1] <<" ";
		std::cout << std::endl;
		int tmp = a[i];
		int j = i-1;
		while(j > 0 && a[j] > tmp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tmp;
	}
}
