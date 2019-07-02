#include <iostream>

using namespace std;

int memo[2005];

int dp(int n){
	if(n <= 2){
		return 1;
	}
	
	if(n == 3){
		return 2;
	}
	
	if(memo[n] != 0){
		return memo[n];
	}
	
	memp[n] = dp(n - 1) + dp(n - 3) + dp(n - 4);
	
	return memo[n];
}


int main(void){
	int n;
	
	cin >> n;
	
	int res = dp(n);
	
	cout << res;
	
	return 0;
}
