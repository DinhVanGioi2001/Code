#include <iostream>
#include <string>

std::string a, b;

std::string total(){
	while(a.size() > b.size()) a = '0'+a;
	while(b.size() > a.size()) b = '0'+b;
	int leng = a.size();
	std::string s = "";
	int tmp = 0;
	for(int i = leng - 1; i >= 0; i--){
		int sum = a[i] - '0' + b[i] - '0' + tmp;
		s = char(sum % 10 + '0') + s;
		tmp = sum / 10;
	}
	if(tmp) return (char(tmp + '0') + s);
	return s;
}

int main()
{
	std::cin >> a >> b;
	//in tong nho nhat
	for (int i = 0; i < a.size(); i++)
		if (a[i] == '6')
			a[i] = '5';
	for (int i = 0; i < b.size(); i++)
		if (b[i] == '6')
			b[i] = '5';
	std::cout << total() << " ";

	//in tong lon nhat
	for (int i = 0; i < a.size(); i++)
		if (a[i] == '5')
			a[i] = '6';
	for (int i = 0; i < b.size(); i++)
		if (b[i] == '5')
			b[i] = '6';
	std::cout << total() << std::endl;
}