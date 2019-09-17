#include <iostream>

using namespace std;


int main(void){
	
	int N, result = 0;
	
	cin >> N;
	
	string firstPrice, secondPrice;
	
	cin >> firstPrice;
	cin >> secondPrice;
	
	int firstIntegerValue, secondIntegerValue, firstComparison, secondComparison;
	
	for(int i = 0; i < N; i++){
		firstIntegerValue = firstPrice[i] - '0';
		secondIntegerValue = secondPrice[i] - '0';
		
		if(firstIntegerValue >= secondIntegerValue){
			firstComparison = firstIntegerValue - secondIntegerValue;
			secondComparison = secondIntegerValue + 10 - firstIntegerValue;
		} else {
			firstComparison = secondIntegerValue - firstIntegerValue;
			secondComparison = firstIntegerValue + 10 - secondIntegerValue;
		}
		
		if(firstComparison <= secondComparison){
			result += firstComparison;
		} else {
			result += secondComparison;
		}
	}
	
	cout << result;
	
	return 0;
}
