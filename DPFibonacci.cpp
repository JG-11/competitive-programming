#include <iostream>

using namespace std;

int memo[2005];

int fibonacci(int n){
	if(n <= 2){
		return 1;
	}
	
	if(memo[n] != 0){
		return memo[n];
	}
	
	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	
	return memo[n]; 
}


int main(void){
	
	int n;
	
	cin >> n;
	
	int res = fibonacci(n);
	
	cout << res;
	
	return 0;
}
