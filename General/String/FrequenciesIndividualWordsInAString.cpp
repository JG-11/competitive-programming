#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main(void){
	
	map<string, int> words;
	
	string phrase;
	
	getline(cin, phrase);
	
	stringstream s(phrase);
	
	string word;
	
	while(s >> word){
		words[word]++;
	}
	
	map<string, int>::iterator itr;
	
	for(itr = words.begin(); itr != words.end(); itr++){
		cout << endl << itr->first << " repeats " << itr->second << " times.";
	}
	
	
	return 0;
}
