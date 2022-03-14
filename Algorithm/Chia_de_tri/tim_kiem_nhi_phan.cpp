#include<iostream>

int binarySearch(int a[], int left, int right, int k){
    if(left > right) 
        return 0;
    int mid = (left + right) / 2;
    if(k == a[mid]) 
        return mid;
    if(k > a[mid]) 
        return binarySearch(a, mid + 1, right, k);
    if(k < a[mid]) 
        return binarySearch(a, left, mid - 1, k);
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, k;
        std::cin >> n >> k;
        int a[n+1];
        for(int i = 1; i <= n; i++) std::cin >> a[i];
        int left = 1, right = n;
        int tmp = binarySearch(a, left, right, k);
        if(tmp) std::cout << tmp << "\n";
        else std::cout << "NO\n";
    }
}