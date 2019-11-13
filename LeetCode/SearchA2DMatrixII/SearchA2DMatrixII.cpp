#include <iostream>
#include <vector>

using namespace std;


bool search(vector<vector<int>> matrix, int target){
	
	int rows = matrix.size();
	
	if(rows == 0){
		return false;
	}
	
	int columns = matrix[0].size();
	
	//starting point
	int c = 0;
	rows--;
	
	while(rows >= 0 && c < columns){
		if(matrix[rows][c] > target){
			rows--;
		} else if(matrix[rows][c] < target){
			c++;
		} else {
			return true;
		}
	}
	
	return false; 
}


int main(void){
	
	vector<vector<int>> matrix;
	
	/*	[1,   4,  7, 11, 15],
	 *	[2,   5,  8, 12, 19],
	 *	[3,   6,  9, 16, 22],
	 *	[10, 13, 14, 17, 24],
	 *	[18, 21, 23, 26, 30]
	 */
	
	matrix.emplace_back();
	matrix.back().emplace_back(1);
	matrix.back().emplace_back(4);
	matrix.back().emplace_back(7);
	matrix.back().emplace_back(11);
	matrix.back().emplace_back(15);
	
	matrix.emplace_back();
	matrix.back().emplace_back(2);
	matrix.back().emplace_back(5);
	matrix.back().emplace_back(8);
	matrix.back().emplace_back(12);
	matrix.back().emplace_back(19);
	
	matrix.emplace_back();
	matrix.back().emplace_back(3);
	matrix.back().emplace_back(6);
	matrix.back().emplace_back(9);
	matrix.back().emplace_back(16);
	matrix.back().emplace_back(22);
	
	matrix.emplace_back();
	matrix.back().emplace_back(10);
	matrix.back().emplace_back(13);
	matrix.back().emplace_back(14);
	matrix.back().emplace_back(17);
	matrix.back().emplace_back(24);
	
	matrix.emplace_back();
	matrix.back().emplace_back(18);
	matrix.back().emplace_back(21);
	matrix.back().emplace_back(23);
	matrix.back().emplace_back(26);
	matrix.back().emplace_back(30);
	
	int target = 5;
	
	bool result = search(matrix, target);
		
	cout << (result ? "true" : "false") << endl;
	
	return 0;
}
