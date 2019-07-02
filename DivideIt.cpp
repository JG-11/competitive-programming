#include <iostream>
//#include <cstdio>

using namespace std;

int main(void){
	
	//freopen("divide_it.txt", "r", stdin);
	
	int q, twoAmount, threeAmount, fiveAmount;
	
	cin >> q;
	
	long long number;
	
	while(q--){
		
		cin >> number;
		
		twoAmount = 0, threeAmount = 0, fiveAmount = 0;
		
		while(number % 2 == 0){
			twoAmount++;
			number /= 2;
		}
		
		while(number % 3 == 0){
			threeAmount++;
			number /= 3;
		}
		
		while(number % 5 == 0){
			fiveAmount++;
			number /= 5;
		}
		
		if(number != 1){
			cout << -1 << endl;
		} else {
			cout << twoAmount + (2 * threeAmount) + (3 * fiveAmount) << endl;
		}
		
	}
	
	return 0;
}
