#include <iostream>
#include <utility>
#include <map>

using namespace std;

int main(void){
	
	pair<string, int> genaro;
	
	genaro = make_pair("Genaro Almaraz", 19);
	
	cout << endl << genaro.first << " tiene " << genaro.second << endl;
	
	pair<string, int> liliana("Liliana Ponce", 19);
	
	cout << endl << liliana.first << " tiene " << liliana.second << endl;
	
	genaro.swap(liliana);
	
	cout << endl << "-----Swapped pairs-----" << endl;
	
	cout << endl << genaro.first << " " << genaro.second << endl;
	
	cout << endl << liliana.first << " " << liliana.second << endl;
	
	cout << endl << "MAP" << endl;
	
	map<int, int> numbers;
	
	numbers.insert(pair<int, int>(1, 6));
	numbers.insert(pair<int, int>(2, 4));
	numbers.insert(pair<int, int>(3, 5));
	
	map<int, int>::iterator itr;
	
	for(itr = numbers.begin(); itr != numbers.end(); itr++){
		cout << endl << itr->first << " " << itr->second;
	}
	
	
	return 0;
}
