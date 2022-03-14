#include<iostream>
#include<cmath>

using namespace std;

void nextstring(int n, char a[]){
	int i = n - 1;
    while(i > 0 && a[i] == 'B')
    {
        a[i] = 'A';
        i--;
    }
    if(i >= 0 && a[i] == 'A') a[i] = 'B';
}
void display(int n, char a[]){
	for(int i = 0; i < n; i++) cout << a[i];
	std::cout << " ";
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		char a[n];
		for(int i = 0; i < n; i++) a[i] = 'A';
		int count = pow(2, n);
		while(count > 0){
			display(n, a);
			nextstring(n, a);
			count--;
		}
		cout << endl;
	}
}
