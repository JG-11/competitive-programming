#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(int number){
	int root = sqrt(number);

	return (root * root == number);
}

bool isFibonacci(int number){
	
	return isPerfectSquare(5 * number * number + 4) ||
		isPerfectSquare(5 * number * number - 4);
	
}

int main(void){
	
	int limit;
	
	cin >> limit;
	
	for(int i = 1; i < limit; i++){
		if(isFibonacci(i) == false){
			cout << i << " ";
		}
	} 
	
	return 0;
}
