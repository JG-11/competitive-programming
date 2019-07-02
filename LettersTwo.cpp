#include <iostream>
#include <vector>

using namespace std;

int main(void){
	
	int m, n;
	
	cin >> m >> n;
	
	int dormitories[m], letters[n], i, j, value, k;
	
	for(i = 0; i < m; i++){
		cin >> dormitories[i];
	}
	
	for(j = 0; j < n; j++){
		cin >> letters[j];
	}
	
	
	vector<int> differences;
	
	int sum = 0;
	
	differences.emplace_back(dormitories[0]);
	
	int differencesSize = differences.size();
	
	for(i = 1; i < m; i++){
		sum = dormitories[i] + differences[i - 1];
		differences.emplace_back(sum);
	}
	
	for(j = 0; j < n; j++){
		value = letters[j];
		for(k = 0; k < differencesSize; k++){
			if(value <= differences[k]){ 
				cout << 1 << " " << value << endl;
			} else if(value <= differences[k]){
				cout << k + 1 << " " << value - differences[k - 1] << endl;
			} 
			break;
		}			
	}
	return 0;
}
