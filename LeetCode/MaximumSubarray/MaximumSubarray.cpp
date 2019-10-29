#include <iostream>

using namespace std;


int main(void){
	
	int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
	
	//Kadane's algorithm - Dynamic Programming
	
	int s = sizeof(nums) / sizeof(nums[0]);
	
	if(s == 0){
		cout << INT_MIN << endl;
	} else {
		int maxSoFar = nums[0], maxEndingHere = nums[0];
		
		for(int i = 1; i < s; i++){
			maxEndingHere = max(maxEndingHere + nums[i], nums[i]);
			
			maxSoFar = max(maxEndingHere, maxSoFar);
		}
		
		cout << maxSoFar << endl;
	}
	
	return 0;
}
