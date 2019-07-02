#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


int main(void){
	
	int n, sum = 1;
	
	cin >> n;
	
	int realSize = n * 2;
	
	int a[realSize], value;
	
	vector<int> results;
	
	bool one = false;
	
	for(int i = 0; i < n; i++){
		cin >> value;
		if(value == 1){
			one = true;
		}
		a[i] = value;
		a[i + n] = value;
	}
	
	if(!one){
		cout << 0;
	} else {
		for(int i = 1; i < realSize; i++){
			if(a[i] == 1 && a[i] == a[i - 1]){
				sum += 1;
			} else {
				results.emplace_back(sum);
				sum = 1;
			}
		}
		
		auto result = max_element(begin(results), end(results));
		
		cout << *result;	
	}
	
	return 0;
}
