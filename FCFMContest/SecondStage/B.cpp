#include <iostream>
#include <set>

using namespace std;

int main(void){
	
	int end, n, goal;
	
	cin >> end >> n >> goal;
	
	int matrix[n][3];
	
	int x, y;

	set<int> start;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> matrix[i][j];
			if(matrix[i][j] == 1){
				x = i;
				y = j;
			}	
			if(j == 0){
				start.insert(matrix[i][j]);
			}
		}
	}
	
	if(start.count(matrix[x][y + 1])){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < 3; j++){
				
			}
		}
	} else if(start.count(matrix[x][y + 2])){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < 3; j++){
				
			}
		}
	} 
	
	
	
	return 0;
}
