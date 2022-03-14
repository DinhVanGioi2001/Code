#include <bits/stdc++.h>
using namespace std;

int tong(int arr[], int n){
	int maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;

	for (int i = 0; i < n; i++){
		if (arr[i] > maxA)
		{
			maxC = maxB;
			maxB = maxA;
			maxA = arr[i];
		}else if (arr[i] > maxB){
			maxC = maxB;
			maxB = arr[i];
		}else if (arr[i] > maxC)
			maxC = arr[i];
	}

	return (maxA + maxB + maxC);
}

int main(){
	int t;
	std::cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << tong(a, n) << "\n";
	}
	return 0;
}