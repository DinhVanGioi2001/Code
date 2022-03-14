#include <bits/stdc++.h> 
using namespace std;  
  
#define OUT 0  
#define IN 1  
  
// returns number of words in str  
int countWords(char *str)  {  
    int state = OUT;  
    int wc = 0;
    while (*str)  {  
        if (*str == ' ' || *str == '\n' || *str == '\t')  
            state = OUT; 
        else if (state == OUT)  {  
            state = IN;  
            ++wc;  

        }  
  
        // Move to next character  
        ++str;  
    }  
  
    return wc;  
} 

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char a[100];
		cin.getline(a,100);
		cout<<countWords(a)<<endl;1
	}
	return 0;
}  
