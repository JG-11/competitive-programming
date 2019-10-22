#include <iostream>
#include <vector>

using namespace std;

//Algorithm
/*	Note: because there are n + 1 numbers are n distinct possible
 *  numbers, the pigeonhole principle implies that at least one of the
 * 	numbers is duplicated. 
 */

int findDuplicate(vector<int> &nums){
	
	sort(nums.begin(), nums.end());
	
	for(int i = 1; i < nums.size(); i++){
		if(nums[i] == nums[i - 1]){
			return nums[i];
		}
	}	
	
	return 0;
}

int main(void){
	
	vector<int> nums = {1, 2, 3, 4, 5, 2, 8, 6}; 
	
	int res = findDuplicate(nums);
	
	cout << res << endl;
	
	return 0;
}
