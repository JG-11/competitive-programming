#include <iostream>
#include <vector>

using namespace std;

int main(void){
	
	vector<vector<int>> m;
	
	m.emplace_back();
	m.back().emplace_back(1);
	m.back().emplace_back(2);
	m.back().emplace_back(3);
	
	m.emplace_back();
	m.back().emplace_back(4);
	m.back().emplace_back(5);
	m.back().emplace_back(6);
	
	m.emplace_back();
	m.back().emplace_back(7);
	m.back().emplace_back(8);
	m.back().emplace_back(9);
	
	/* 1 2 3
	 * 4 5 6
	 * 7 8 9
	 */
	
	int n = m.size();
	
	cout << "Original matrix" << endl;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	
	
	//Reverse each row
	
	int temp = 0;
	
	cout << "Each row reversed" << endl;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n / 2; j++){
			temp = m[i][j];
			m[i][j] = m[i][n - j - 1];
			m[i][n - j - 1] = temp;
		}
	}
	
	/* 3 2 1
	 * 6 5 4
	 * 9 8 7
	 */
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
