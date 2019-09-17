#include <iostream>

using namespace std;


int main(void){
	
	string phrase;
	
	getline(cin, phrase);
	
	phrase.erase(remove(phrase.begin(), phrase.end(), ' '), phrase.end());
	
	cout << phrase;
	
	return 0;
}
