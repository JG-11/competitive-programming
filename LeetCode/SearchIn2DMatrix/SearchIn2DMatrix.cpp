#include <iostream>
#include <vector>

using namespace std;


int main(void){
	
	vector<vector<int>> matrix;
	
	/*	1	3	5	7
	 * 	10	11	16	20
	 * 	23	30	34	50
	 */ 
	
	matrix.emplace_back();
	matrix.back().emplace_back(1);
	matrix.back().emplace_back(3);
	matrix.back().emplace_back(5);
	matrix.back().emplace_back(7);
	
	matrix.emplace_back();
	matrix.back().emplace_back(10);
	matrix.back().emplace_back(11);
	matrix.back().emplace_back(16);
	matrix.back().emplace_back(20);
	
	matrix.emplace_back();
	matrix.back().emplace_back(23);
	matrix.back().emplace_back(30);
	matrix.back().emplace_back(34);
	matrix.back().emplace_back(50);
	
	
	/* Binary search
	 * Time complexity: O(log(mn))
	 * Space complexity: O(1)
	 */ 
	
	if(matrix.size() == 0){
		cout << "false" << endl;
	} else {
		int target = 30;
		
		int rows = matrix.size();
		int cols = matrix[0].size();
		
		int left = 0, right = rows * cols - 1;
		
		bool exists = false;
		
		while(left <= right){
			int middle = (left + right) / 2;
			
			if(matrix[middle / cols][middle % cols] == target){
				exists = true;
				break;
			}
			
			if(target < matrix[middle / cols][middle % cols]){
				right = middle - 1;
			} else {
				left = middle + 1;
			}
		}
		
		if(exists){
			cout << "true" << endl;
		} else {
			cout << "false" << endl;
		}
	}
	
	return 0;
}
