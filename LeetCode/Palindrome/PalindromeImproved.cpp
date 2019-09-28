#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>

using namespace std;

int main(void){
	
	string s;
	
	getline(cin, s);

	//For purpose of this problem, an empty string is a valid palindrome
    if(s.length() == 0){
		cout << "true" << endl;
		return 0;
	}
        
    //I just have to consider alphanumeric characters
    for(int i = 0; i < s.length(); i++){
		if(!isalnum(s[i])){
			s[i] = ' ';
        }
	}
        
    //I have to delete my empty spaces
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
        
    //Empty string, but originally with a length different to zero
    if(s.length() == 0){
		cout << "true" << endl;
		return 0;
	}
        
    //I set to lower case my whole string
    transform(s.begin(), s.end(), s.begin(), ::tolower);
        
    //I keep a track of my original string, in order to do the last comparison
    string original = s;
        
    //I reverse my transformed input string
    reverse(s.begin(), s.end());
        
    //I compare if my original string is equals to my transformed string
    if(s == original){
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
	
	return 0;
}
