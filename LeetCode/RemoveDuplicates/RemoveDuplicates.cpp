#include <iostream>
#include <vector>

using namespace std;

int main(void){
	
	int n;
	
	cin >> n;
	
	vector<int> nums;
	
	int v, i;
	
	for(i = 0; i < n; i++){
		cin >> v;
		nums.emplace_back(v);
	}
	
	cout << "Original sorted vector" << endl;
	
	for(auto e : nums){
		cout << e << " ";
	} 
	
	
	//Remove duplicates
	
	i = 0;
	
	int j;
	
	for(j = 1; j < n; j++){
		if(nums[j] != nums[i]){
			i++;
			nums[i] = nums[j];
		}
	}
	
	
	cout << endl << "Modified vector" << endl;
	
	j = 0;
	
	for(auto e : nums){
		if(j == i + 1){
			break;
		}
		
		cout << e << " ";
		
		j++;
	}
	
	cout << endl << "Length = " << i + 1 << endl;
	
	return 0;
}
