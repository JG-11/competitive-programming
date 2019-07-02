#include <iostream>
#include <map>

using namespace std;

int main(void){
	
	long long n;
	
	long long k, res = 0, partial;
	
	cin >> n >> k;
	
	long long array[n];
	
	map<long long, long long> frequencies;
	
	for(long long i = 0; i < n; i++){
		cin >> array[i];
		frequencies[array[i]]++;
	}
	
	for(long long i = 0; i < n; i++){
		frequencies[array[i]]--;
		
		partial = frequencies[k - array[i]];
		
		res += partial;
	}
	
	cout << endl << res << endl;
	
	return 0;
}
