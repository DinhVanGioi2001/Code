#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(b == 0) printf("0");
	else{
		int sum = a + b;
		printf("%d ", sum);
		int sub = a - b;
		printf("%d ", sub);
		int mul = a * b;
		printf("%d ", mul);
		float div = a / (float)b;
		printf("%.2f ", div);
		int mod = a % b;
		printf("%d ", mod);
	}
}