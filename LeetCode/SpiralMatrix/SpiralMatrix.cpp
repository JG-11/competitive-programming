#include <iostream>
#include <vector>

using namespace std;


int main(void){
	
	vector<vector<int>> matrix;
	
	matrix.emplace_back();
	matrix.back().emplace_back(1);
	matrix.back().emplace_back(2);
	matrix.back().emplace_back(3);
	
	matrix.emplace_back();
	matrix.back().emplace_back(4);
	matrix.back().emplace_back(5);
	matrix.back().emplace_back(6);
	
	matrix.emplace_back();
	matrix.back().emplace_back(7);
	matrix.back().emplace_back(8);
	matrix.back().emplace_back(9);
	
	for(auto x : matrix){
		for(auto y : x){
			cout << y << " ";
		}
		cout << endl;
	}
	
	//Spiral order
	
	int rows = matrix.size();
	int columns = matrix[0].size();
	
	int dir = 0, r = 0, c = 0;
	
	int dr[] = {0, 1, 0, -1};
	int dc[] = {1, 0, -1, 0};
	
	vector<int> res;
	
	bool seen[rows][columns];
	
	int i, j;
	
	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			seen[i][j] = false;
		}
	}
	
	for(i = 0; i < rows * columns; i++){
		res.emplace_back(matrix[r][c]);
		seen[r][c] = true;
		
		int cr = r + dr[dir];
		int cc = c + dc[dir];
		
		if(0 <= cr && cr < rows && 0 <= cc && cc < columns && !seen[cr][cc]){
			r = cr;
			c = cc;
		} else {
			dir = (dir + 1) % 4;
			r += dr[dir];
			c += dc[dir];
		}
	}
	
	for(i = 0; i < res.size() - 1; i++){
		cout << res[i] << ", ";
	}
	
	cout << res[i] << endl;
	
	return 0;
}
