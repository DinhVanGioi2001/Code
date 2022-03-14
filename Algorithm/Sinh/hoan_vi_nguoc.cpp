#include<iostream>

void swap(int &x, int &y){
	int tmp = x;
	x = y;
	y = tmp;
}

void display(int n, int a[]){
	for(int i = 1; i <= n; i++) std::cout << a[i];
	std::cout << " ";
}
bool check(int n, int a[]){
	for(int i = n; i >= 1; i--)
		if(a[i] != i) return false;
	return true;
}
void solution(int n, int a[], int stop){
	int j = n-1;
	while(j > 0 && a[j] < a[j+1]) j--;
	if(j < 0) stop = 1;
	else{
		int k = n;
		while(a[j] < a[k]) k--;
		swap(a[j], a[k]);
		int b = j + 1;
		k = n;
		while(b <= k){
			swap(a[b], a[k]);
			k--; b++;
		}
	}
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n, stop = 0;
		std::cin >> n;
		int a[n+1];
		for(int i = n; i > 0; i--) a[i] = n - i + 1;
		display(n, a);
		while(!check(n, a) & stop == 0){
			solution(n, a, stop);
			display(n, a);
		}
		std::cout << std::endl;
	}
}
