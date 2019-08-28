#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(void){
	
	vector<int> values;
	map<int, int> key; 
	
	int n, k, i;
	
	cin >> n >> k;
	
	values.resize(n);
	
	for(i = 0; i < n; i++){
		cin >> values[i];
		key[values[i]] = i;
	}
	
	int complement = 0;
	
	for(i = 0; i < n; i++){
		complement = k - values[i];
		
		bool exists = key.count(complement);
		
		if(exists){
			cout << "[" << i << ", " << key[complement]  << "]" << endl;
			break; 
		}
	} 
	
	return 0;
}
