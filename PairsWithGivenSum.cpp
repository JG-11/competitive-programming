#include <iostream>
#include <map>

using namespace std;


int main(void){
	
	int n, k, i, result = 0;
	
	cin >> n >> k;
	
	int array[n];
	
	map<int, int> frequencies;
	
	for(i = 0; i < n; i++){
		cin >> array[i];
		frequencies[array[i]]++;
	}
	
	for(i = 0; i < n - 1; i++){
		frequencies[array[i]]--;
		
		result += frequencies[k - array[i]];
	}
	
	cout << result;

	return 0;
}
