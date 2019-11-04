#include <iostream>
#include <vector>


using namespace std;


/*	Time complexity: O(log(N)) -> search time that gives an idea to use a binary search
 * 	Space complexity: O(1)
 */ 

int findRotationIndex(vector<int> nums, int left, int right){
	
	//Array is not rotated
	if(nums[left] < nums[right]){
		return 0;
	}
	
	while(left <= right){
		int middle = (left + right) / 2;
		
		if(nums[middle] > nums[middle + 1]){
			//Hence middle + 1 is the smallest element
			return middle + 1;
		}
		
		if(nums[middle] < nums[left]){
			//We continue the search on the left side
			right = middle - 1;
		} else {
			//We continue the search on the right side
			left = middle + 1;
		} 		
	}
	
	return 0;
}


int search(vector<int> nums, int left, int right, int target){
	//Binary search
	while(left <= right){
		int middle = (left + right) / 2;
		
		if(nums[middle] == target){
			return middle;
		} 
		
		if(nums[middle] < target){
			left = middle + 1;
		} else {
			right = middle - 1;
		}	
	}
	
	return -1;
}


int main(void){
	
	vector<int> nums = {4,5,6,7,0,1,2};
	
	int target, result;
	
	target = 4;
	
	if(nums.size() == 0){
		result = -1;	
	} else if(nums.size() == 1){
		if(nums[0] == target){
			result = 0;
		} else {
			result = -1;
		}
	} else {
		int pivot = findRotationIndex(nums, 0, nums.size() - 1);
		
		//If target is the smallest element
		if(nums[pivot] == target){
			result = pivot;
		}
		
		
		//If array is not rotated, search in the entire array
		if(pivot == 0){
			result = search(nums, 0, nums.size() - 1, target);
		}
		
		
		if(target < nums[0]){
			//Search in the right side
			result = search(nums, pivot, nums.size() - 1, target);
		} else {
			//Search in the left side
			result = search(nums, 0, pivot, target);
		}
	}
	
	cout << result << endl;
	
	return 0;
}
