//O(log n)

#include <iostream>

using namespace std;

int squareRoot(int number){
	
	int answer;
	
	if(number == 0 || number == 1){
		return number;
	}
	
	//Let's implement Binary Search
	int lower = 1, higher = number;
	
	while(lower <= higher){
		int mid = (lower + higher) / 2;
		
		if(mid * mid == number){
			return mid;
		} 
		
		if(mid * mid > number){
			higher = mid - 1;
		} else {
			lower = mid + 1;
			answer = mid;
		}
	}
	
	return answer;
}

int main(void){
	
	int number;
	
	cin >> number;
	
	int root = squareRoot(number);
	
	cout << endl << "Square root of " << number << " is " << root << endl;
	
	return 0;
}
