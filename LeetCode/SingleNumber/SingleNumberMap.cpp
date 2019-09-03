#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main(void){
	
	int n, v;
	
	vector<int> numbers;
	
	cin >> n;
	
	while(n--){
		cin >> v;
		numbers.emplace_back(v);
	}
	
	map<int, int> frequencies;
	
	for(auto z : numbers){
		frequencies[z]++;
	}
	
	for(auto i : frequencies){
		if(i.second == 1){
			cout << i.first << endl;
			break;
		}
	}
	
	return 0;
}
