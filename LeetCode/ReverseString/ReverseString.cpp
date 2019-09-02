#include <iostream>

using namespace std;

int main(void){
	
	int n = 5;
	
	char s[5] = {'H', 'e', 'l', 'l', 'o'};
	
	char start, end;
	
	int i, j;	
	
	if(n != 0){
		for(i = 0; i < n; i++){
			if(i == n / 2){
				break;
			}
			
			j = n - i - 1;
			
			start = s[i];
			end = s[j];
			
			s[i] = end;
			s[j] = start;
		}
		
		cout << "[";
		
		for(i = 0; i < n - 1; i++){
			cout << "\"" << s[i] << "\"" << ", ";
		}
		
		cout << "\"" << s[i++] << "\"]";
	}
	
	return 0;
}
