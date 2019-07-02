#include <iostream>

using namespace std;


int main(void){
	
	int limit;
	
	cin >> limit;
	
	bool primes[limit + 1];
	
	memset(primes, true, sizeof(primes));
	
	for(int i = 2; i * i <= limit; i++){
		if(primes[i]){
			for(int j = i * i; j <= limit; j += i){
				primes[j] = false;
			}
		}
	}
	
	for(int k = 2; k <= limit; k++){
		if(primes[k]){
			cout << k << " ";
		}
	}
	
	
	return 0;
}
