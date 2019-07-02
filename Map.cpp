#include <iostream>
#include <map>

using namespace std;

int main(void){
	
	map<int, int> numbers;
	
	int value = 0;
	
	while(value != -1){
		cin >> value;
		
		numbers[value]++;
	}
	
	map<int, int>::iterator itr;
	
	for(itr = numbers.begin(); itr != numbers.end(); itr++){
		cout << endl << itr->first << " repeats " << itr->second << endl;
	}
	
	numbers.erase(numbers.begin(), numbers.find(-2));
	
	for(itr = numbers.begin(); itr != numbers.end(); itr++){
		cout << endl << itr->first << ", " << itr->second << endl; 
	}
	
	return 0;
}
