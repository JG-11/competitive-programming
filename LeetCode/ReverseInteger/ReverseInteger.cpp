#include <iostream>

using namespace std;

int reverse(int x){
	
	int r = 0;
	
	while(x != 0){
		int pop = x % 10;
		
		x /= 10;
		
		if(r > INT_MAX / 10 || r < INT_MIN / 10){
			return 0;
		}
		
		r = r * 10 + pop;
	}
	
	return r;
}


int main(void){
	int x;
	
	cin >> x;
	
	cout << reverse(x) << endl;
	
	return 0;
}
