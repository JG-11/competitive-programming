#include <iostream>
#include <stack>

using namespace std;

int main(void){
	
	string s;
	
	getline(cin, s);
	
	if(s == ""){
		cout << "true" << endl;
		return 0;
	}
	
	if(s.length() % 2 != 0){
		cout << "false" << endl;
		return 0;
	}
	
	if(s[0] == ')' || s[0] == ']' || s[0] == '}'){
		cout << "false" << endl;
		return 0;
	}
	
	stack<char> c;
	
	c.push(s[0]);
	
	for(int i = 1; i < s.length(); i++){
		if(s[i] == ')' && c.top() == '('){
			c.pop();
		} else if(s[i] == ']' && c.top() == '['){
			c.pop();
		} else if(s[i] == '}' && c.top() == '{'){
			c.pop();
		} else {
			c.push(s[i]);
		}
	}
	
	if(c.empty()){
		cout << "true" << endl;
		return 0;
	}
	
	cout << "false" << endl;
	
	return 0;
}
