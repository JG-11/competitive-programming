#include <iostream>
#include <set>

using namespace std;


int main(void){
	
	set<int> numbers;

	int number = 0;
	
	while(number != -1){
		cin >> number;
		
		numbers.insert(number);
	}
	
	for(auto x : numbers){
		cout << x << " ";
	}
	
	return 0;
}
