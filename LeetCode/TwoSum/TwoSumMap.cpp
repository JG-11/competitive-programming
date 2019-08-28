#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;

int main(void){
	
	vector<int> values;
	map<int, int> frequencies; 
	
	int n, k, i;
	
	cin >> n >> k;
	
	values.resize(n);
	
	for(i = 0; i < n; i++){
		cin >> values[i];
		frequencies[values[i]] = i;
	}
	
	int complement = 0;
	
	for(i = 0; i < n; i++){
		complement = k - values[i];
		
		bool exists = frequencies.count(complement);
		
		if(exists){
			cout << "[" << i << ", " << frequencies[complement]  << "]" << endl;
			break; 
		}
	} 
	
	return 0;
}
