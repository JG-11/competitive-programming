#include <iostream>

using namespace std;

int fibonacci(int n){
	if(n <= 2){
		return 1;
	}
	
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void){
	
	int n, res;
	
	cin >> n;
	
	res = fibonacci(n);
	
	cout << res;
	
	return 0;
}
