#include <iostream>
#include <vector>

using namespace std;

void reverseWords(vector<char>& s){
	
	if(s.size() != 0){
		//Reverse the vector
		reverse(s.begin(), s.end());
		
		//Track each word, and reverse one by one
		int finder = 0, end, i;
		
		for(finder = 0; finder < s.size(); finder++){
			end = finder;
			while(end < s.size() && s[end] != ' '){
				end++;
			}
			reverse(s.begin() + finder, s.begin() + end);
			finder = end;
		}
		
		for(i = 0; i < s.size() - 1; i++){
			cout << s[i] << " ";
		}
		
		cout << s[i] << endl;		
	} else {
		cout << "Empty vector" << endl;
	}
}

int main(void){
	
	vector<char> s = {'h','o','l','a',' ','m','u','n','d','o'};
	
	reverseWords(s);
	
	return 0;
}
