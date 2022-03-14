#include<iostream>
#include<string>
#include<cstring>

int check[10], a[10];

void Try(std::string s, int i){
	for(int j = 0; j < s.size(); j++){
		if(!check[j]){
			a[i] = j;
			check[j] = true;
			if(i == s.size()){
				for(int k = 1; k <= s.size(); k++)
					std::cout << s[a[k]];
				std::cout << " ";
			}else Try(s, i+1);
			check[j] = false;
		}
	}
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		std::string s;
		std::cin >> s;
		std::memset(check, false, sizeof(check));
		Try(s, 1);
		std::cout << std::endl;
	}
}
