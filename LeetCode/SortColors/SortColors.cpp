#include <iostream>
#include <vector>

using namespace std;


int main(void){
	
	vector<int> nums = {0, 2, 1, 2, 1, 0};
	
	
	if(nums.size() == 0){
		cout << "Empty vector" << endl;
	} else {
		//Dutch National Flag problem solution
		
		int p0 = 0, p2 = nums.size() - 1;
		
		int current = 0;
		
		while(current <= p2){
			if(nums[current] == 0){
				swap(nums[current], nums[p0]);
				current++;
				p0++;
			} else if(nums[current] == 2){
				swap(nums[current], nums[p2]);
				p2--;
			} else {
				current++;
			}
		}
		
		for(int i : nums){
			 cout << i << " ";
		}
	}
	
	return 0;
}
