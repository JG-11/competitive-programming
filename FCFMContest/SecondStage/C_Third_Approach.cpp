#include <iostream>
#include <algorithm>

using namespace std;

int minimum(int a, int b, int c){
	int partial = min(a, b);
	return min(partial, c);
}

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
	} else {
		
		int dp[rows][columns];
		
		memset(dp, sizeof(dp), 0);
		
		int max = 0;
		
		for(int i = 0; i < rows; i++){
			dp[i][0] = matrix[i][0];
			if(dp[i][0] == 1){
				max = 1;
			}
		}
		
		for(int j = 0; j < columns; j++){
			dp[0][j] = matrix[0][j];
			if(dp[0][j] == 1){
				max = 1;
			}
		}
		
		for(int i = 1; i < rows; i++){
			for(int j = 1; j < columns; j++){
				if(matrix[i][j] == 0){
					continue;
				} 
				
				int m = minimum(dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]);
				dp[i][j] = m + 1;
				
				if(dp[i][j] > max){
					max = dp[i][j];
				}
			}
		}
		
		cout << max;
	}
	
	
	return 0;
}
