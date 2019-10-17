#include <iostream>
#include <sstream>

using namespace std;

string reverseString(string &p){
	
	int start, end;
	
	for(start = 0; start < p.size(); start++){
		end = start;
		while(p[end] != ' ' && end < p.size()){
			end++;
		}
		reverse(p.begin() + start, p.begin() + end);
		start = end;
	}
	
	return p;
}

int main(void){
	string p;
	
	getline(cin, p);
	
	string res = reverseString(p);
	
	cout << res << endl;
	
	return 0;
}
