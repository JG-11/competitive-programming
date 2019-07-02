#include <iostream>

using namespace std;

int main(void){
	
	int down, top;
	
	cin >> down >> top;
	
	bool primes[top + 1];
	
	memset(primes, true, sizeof(primes));
	
	for(int i = 2; i * i <= top; i++){
		if(primes[i]){
			for(int j = i * i; j <= top; j += i){
				primes[j] = false;
			}
		}
	}
	
	for(int i = down; i <= top; i++){
		if(primes[i]){
			cout << i << " ";
		}
	}

	return 0;
}
