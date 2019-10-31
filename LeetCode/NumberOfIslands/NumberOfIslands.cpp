#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;


int main(void){
	
	vector<vector<char>> grid = {{'1', '1', '1'}, {'0', '1', '0'},
		{'1', '0', '0'}, {'1', '0', '1'}};
		
	
	int rows = grid.size();
	int numberOfIslands = 0;
	
	if(rows > 0){
		int columns = grid[0].size();
		
		for(int r = 0; r < rows; r++){
			for(int c = 0; c < columns; c++){
				if(grid[r][c] == '1'){
					numberOfIslands++;
					
					grid[r][c] = '0'; //mark as visited
					
					queue<pair<int, int>> neighbors;
					
					neighbors.push(make_pair(r, c));
					
					while(!neighbors.empty()){
						pair<int, int> p = neighbors.front();
						neighbors.pop();
						
						int row = p.first, column = p.second;
						
						if(row - 1 >= 0 && grid[row - 1][column] == '1'){
							neighbors.push(make_pair(row - 1, column));
							grid[row - 1][column] = '0';
						}
						
						if(row + 1 < rows && grid[row + 1][column] == '1'){
							neighbors.push(make_pair(row + 1, column));
							grid[row + 1][column] = '0';
						}
						
						if(column - 1 >= 0 && grid[row][column - 1] == '1'){
							neighbors.push(make_pair(row, column - 1));
							grid[row][column - 1] = '0';
						}
						
						if(column + 1 < columns && grid[row][column + 1] == '1'){
							neighbors.push(make_pair(row, column + 1));
							grid[row][column + 1] = '0';
						}
					}
				}
			}
		}	
	}
			
	cout << numberOfIslands << endl;

	return 0;
}
