#include <iostream>
#include <cstring>

using namespace std;

string expandAroundCenter(string s, int left, int right);

int main(void){
	
	string s;
	
	getline(cin, s);
	
	string temp, longest;
	
	if(s == ""){
		cout << s << endl;
	} else {
		longest = s.substr(0, 1);
		
		for(int i = 0; i < s.length(); i++){
			temp = expandAroundCenter(s, i, i);
			
			if(temp.length() > longest.length()){
				longest = temp;
			}
			
			temp = expandAroundCenter(s, i, i + 1);
			
			if(temp.length() > longest.length()){
				longest = temp;
			}
		}
		
		cout << longest << endl;
	}
	
	return 0;
}

string expandAroundCenter(string s, int left, int right){
	
	while(left >= 0 && right < s.length() && s[left] == s[right]){
		left--;
		right++;
	}

	return s.substr(left + 1, right - left - 1);
}

