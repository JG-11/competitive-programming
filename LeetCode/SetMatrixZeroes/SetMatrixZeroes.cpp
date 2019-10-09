#include <iostream>
#include <vector>

using namespace std;


int main(void){
	
	vector<vector<int>> m;
	
	m.emplace_back();
	m.back().emplace_back(1);
	m.back().emplace_back(1);
	m.back().emplace_back(1);
	
	m.emplace_back();
	m.back().emplace_back(1);
	m.back().emplace_back(0);
	m.back().emplace_back(1);
	
	m.emplace_back();
	m.back().emplace_back(1);
	m.back().emplace_back(1);
	m.back().emplace_back(1);
	
	/* 1 1 1
	 * 1 0 1
	 * 1 1 1
	 */
	 
	int R = m.size();
	int C = m[0].size(); 
	 
	bool isCol = false;
	
	for(int i = 0; i < R; i++){
		if(m[i][0] == 0){
			isCol = true;
		}
		
		for(int j = 1; j < C; j++){
			if(m[i][j] == 0){
				m[i][0] = 0;
				m[0][j] = 0;
			}
		}
	}
	
	for(int i = 1; i < R; i++){
		for(int j = 1; j < C; j++){
			if(m[i][0] == 0 || m[0][j] == 0){
				m[i][j] = 0;
			}
		}
	} 
	
	//Validate first row
	if(m[0][0] == 0){
		for(int j = 0; j < C; j++){
			m[0][j] = 0;
		}
	}
	
	//Validate first column
	if(isCol){
		for(int i = 0; i < R; i++){
			m[i][0] = 0;
		}
	}
	
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	
	/* 1 0 1
	 * 0 0 0
	 * 1 0 1
	 */
	
	return 0;
}
