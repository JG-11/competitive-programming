#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;


int main(void){
	
	vector<int> numbers;
	
	for(int i = 0; i < 10; i++){
		numbers.push_back(i);
	}
	
	int numberToBeFound;
	
	cin >> numberToBeFound;
	
	int lower = 0, higher = numbers.size() - 1;
	
	while(lower <= higher){
		
		int mid = lower + (higher - 1) / 2;
		
		if(numbers[mid] == numberToBeFound){
			cout << endl << "Number found" << endl;
			return 0;
		} 
		
		if(numbers[mid] < numberToBeFound){
			lower = mid + 1;
		} else {
			higher = mid - 1;
		}
		
	}
	
	cout << endl << "Number not found" << endl;
	
	return 0;
}
