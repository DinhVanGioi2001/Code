#include<iostream>
#include<algorithm>

void Union(int n, int m, int a[], int b[]){
    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] < b[j])
            std::cout << a[i++] << " "; 
        else if(b[j] < a[i])
            std::cout << b[j++] << " ";
        else{
            std::cout << a[i++] << " ";
            j++;
        }
    }
    while(i < n) std::cout << a[i++] << " ";
    while(j < m) std::cout << b[j++] << " ";
}
void intersection(int n, int m, int a[], int b[]){
    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] < b[j]) i++;
        else if(b[j] < a[i]) j++;
        else{
            std::cout << a[i++] << " ";
            j++;
        }
    }
}

int main(){
    int test;
    std::cin >> test;
    while(test--){
        int n, m;
        std::cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++) std::cin >> a[i];
        for(int i = 0; i < m; i++) std::cin >> b[i];
        std::sort(a, a + n);
        std::sort(b, b + m);
        Union(n, m, a, b);
        std::cout << std::endl;
        intersection(n, m, a, b);
        std::cout << std::endl;
    }
}