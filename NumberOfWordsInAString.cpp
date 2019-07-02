#include <iostream>
#include <sstream>

using namespace std;

int main(void){
	
	string phrase;
	
	getline(cin, phrase);
	
	stringstream s(phrase);
	
	int count = 0;
	
	string word;
	
	while(s >> word){
		count += 1;
	}
	
	cout << endl << endl << count << " words" << endl;
	
	return 0;
}
