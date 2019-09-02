#include <iostream>
#include <string>

using namespace std;


int main(void){
	
	string address;
	
	cin >> address;

	int l = address.length() - 1;
	
	while(l != -1){
		if(address[l] == '.'){
			address.insert(l, 1, '[');
			address.insert(l + 2, 1, ']');
		}
		
		l -= 1;
	}
	
	cout << address;
	
	return 0;
}
