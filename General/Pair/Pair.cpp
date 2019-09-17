#include <iostream>
#include <utility>
#include <map>

using namespace std;

int main(void){
	
	pair<string, int> genaro;
	
	genaro = make_pair("Genaro Almaraz", 19);
	
	cout << endl << genaro.first << " tiene " << genaro.second << endl;
	
	pair<string, int> juan("Juan Almaraz", 22);
	
	cout << endl << juan.first << " tiene " << juan.second << endl;
	
	genaro.swap(juan);
	
	cout << endl << "-----Swapped pairs-----" << endl;
	
	cout << endl << genaro.first << " " << genaro.second << endl;
	
	cout << endl << juan.first << " " << juan.second << endl;
	
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
