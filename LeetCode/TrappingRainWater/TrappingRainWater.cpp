#include <iostream>
#include <vector>

using namespace std;

int main(void){	
	
	vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
	//vector<int> height = {0,2,0,2,3,0,3,3,4,0,2,1};
	
	if(height.size() == 0){
		cout << 0 << endl;
	} else {
		int left = 0, right = height.size() - 1;
		
		int leftMax = 0, rightMax = 0;
		
		int ans = 0;
		
		while(left < right){
			if(height[left] < height[right]){
				if(height[left] >= leftMax){
					leftMax = height[left];
				} else {
					ans += leftMax - height[left];
				}
				
				left++;
			} else {
				if(height[right] >= rightMax){
					rightMax = height[right];
				} else {
					ans += rightMax - height[right];
				}
				
				right--;
			}
		}
		
		cout << ans << endl;
	}
	
	return 0;
}
