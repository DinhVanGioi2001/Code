#include<iostream>
#include<string>

//void next_bit_string(char x[max]){
//	int n = strlen(x);
//	int i = n-1;
//	while(i > 0 && x[i] == '1'){
//		x[i] == '0';
//		i--;
//	}
//	if(i > 0) x[i] = '1';
//}

int main(){
	int test, i, j;
	std::cin >> test;
	while(test--){
		std::string s;
		std::cin >> s;
		for(i = s.size()-1; i >= 0; i--)
			if(s[i] == '0'){
				s[i] = '1';
				break;
			}
		for(j = i+1; j < s.size(); j++) s[j] = '0';
		for(int i = 0; i < s.size(); i++)
			std::cout << s[i];
		std::cout << std::endl;
	}
}
