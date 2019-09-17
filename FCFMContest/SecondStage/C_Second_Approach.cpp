/*#include <iostream>
#include <algorithm>*/
#include <bits/stdc++.h>

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
	} else{
		int dp[rows][columns];
		
		memset(dp, sizeof(dp), 0);
		
		int result;
		
		for(int i = 0; i < rows; i++){
			for(int j = 0; j < columns; j++){
				if(i == 0 || j == 0){
					dp[i][j] = 1;
				} else {
					int value = matrix[i][j];
					if(value == matrix[i - 1][j] && 
					value == matrix[i][j - 1] && value == matrix[i - 1][j - 1]){
						dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1] ) + 1; 
					} else {
						dp[i][j] = 1;
					}
				}
				
				result = max(result, dp[i][j]);
			}
		}
		
		cout << result;
	}
	

	return 0;
}
