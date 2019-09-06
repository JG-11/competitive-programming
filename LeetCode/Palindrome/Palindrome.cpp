#include <iostream>
#include <algorithm>
#include <boost/algorithm/string.hpp>
#include <string>

using namespace std;

int main(void){
	
	string a;
	
	getline(cin, a);
	
	//Just alphanumeric characters
	for(int i = 0; i < a.length(); i++){
	    if(!((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))){
	        a[i] = ' ';
	    }
	}
	
	//With no spaces
	a.erase(remove(a.begin(), a.end(), ' '), a.end());
	
	//Lower cases
	boost::algorithm::to_lower(a);

    string b = a;
    
    //Reverse
    reverse(b.begin(), b.end());
    
    if(a == b){
        cout << "true";
    } else {
        cout << "false";
    }
    
    cout << endl;
    
	return 0;
}
