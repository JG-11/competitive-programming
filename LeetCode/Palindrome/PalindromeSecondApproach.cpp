#include <iostream>
#include <algorithm>

using namespace std;


int main(void){
	
	string a;
	
	getline(cin, a);
	
	//Just alphanumeric characters
	for(int i = 0; i < a.length(); i++){
		if(!((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') 
			|| (a[i] >= '0' && a[i] <= '9'))){
			a[i] = ' ';
		}
	}
	
	//With no spaces
	a.erase(remove(a.begin(), a.end(), ' '), a.end());
	
	
	//Lower cases
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	
	string b = a;
	
	//Reverse the copy of the string
	reverse(b.begin(), b.end());
	
	if(b == a){
		cout << "true";
	} else {
		cout << "false";
	}
	
	cout << endl;
	
	return 0;
}
