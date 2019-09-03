#include <iostream>
#include <vector>

using namespace std;


int main(void){
	
	vector<int> numbers;
	
	int n, value;
	
	cin >> n;
	
	while(n--){
		cin >> value;
		numbers.emplace_back(value);
	}
	
	int a = 0;
	
	for(auto x : numbers){
		a ^= x;
	}
	
	cout << a << endl;
	
	return 0;
}
