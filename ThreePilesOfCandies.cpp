#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	
	int q;
	
	cin >> q;
	
	while(q--){
		long long a, b, c;
		
		cin >> a >> b >> c;
		
		long long sum = a + b + c;
		
		cout << fixed << sum / 2 << endl;
	}
	
	
	return 0;
}
