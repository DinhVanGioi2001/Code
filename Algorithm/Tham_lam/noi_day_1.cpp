#include<iostream>
#include<queue>
#include<vector>
typedef long long ll;

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n, a;
		std::cin >> n;
		std::priority_queue<ll, std::vector<ll>, std::greater<ll> > s;
		for(int i = 0; i < n; i++){
			std::cin >> a;
			s.push(a);
		}
		ll sumCost = 0;
		while(s.size() > 1){
			ll n1 = s.top(); s.pop();
			ll n2 = s.top(); s.pop();
			s.push(n1 + n2);
			sumCost = sumCost + (n1+n2); 
		}
		std::cout << sumCost << std::endl;
	}
}