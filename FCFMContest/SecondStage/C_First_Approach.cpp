#include <iostream>

using namespace std;

int main(void){
	
	int rows, columns;
	
	cin >> rows >> columns;
	
	int matrix[rows][columns];
	
	bool zero = false, one = false;
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			cin >> matrix[i][j];
			if(matrix[i][j] == 1){
				one = true;
			} else {
				zero = true;
			}
		}
	}
	
	if(!one){
		cout << 0;
	} else if(!zero){
		if(rows <= columns){
			cout << rows;
		} else {
			cout << columns;
		}
	} else {
		int result = 0;
		
		int x, y;
		
		for(int i = 0; i < rows; i++){
			for(int j = 0; j < columns; j++){
				x = i;
				y = j;
				if(matrix[x][y] != 0){
					while((matrix[x + 1][j] != 0 && (x + 1 < rows)) && (matrix[i][y + 1] != 0 && 
						(y + 1 < columns))){
						matrix[x][y] = 4;
						result += 1;
						x += i + 1;
						y += j + 1;
					}
				}
			}
		}
		
		
		cout << result << endl;
		
		for(int i = 0; i < rows; i++){
			for(int j = 0; j < columns; j++){
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	
	return 0;
}
