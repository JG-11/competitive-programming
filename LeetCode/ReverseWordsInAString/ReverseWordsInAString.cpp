#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(void){
	
	string phrase;
	
	getline(cin, phrase);
	
	string o = phrase;
	
	phrase.erase(remove(phrase.begin(), phrase.end(), ' '), phrase.end());
	
	if(phrase.length() != 0){
		stringstream t(o);
	
		string word, res;
		
		vector<string> store;
		
		while(t >> word){
			store.emplace_back(word);	
		}
		
		for(int i = store.size() - 1; i > 0; i--){
			res += store[i];
			res += ' ';
		}
		
		res += store[0];
		
		cout << res << endl;
	} else {
		cout << phrase << endl;
	}
	
	return 0;
}
