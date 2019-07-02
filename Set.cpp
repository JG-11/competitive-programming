#include <iostream>
#include <set>

using namespace std;


int main(void){
	
	set<int> numbers;
	
	int amount = 0;
	
	while(amount != -1){
		cin >> amount;
		numbers.insert(amount);
	}
	
	set<int> numbersTwo;
	
	numbersTwo.insert(1);
	numbersTwo.insert(2);
	numbersTwo.insert(3);
	
	swap(numbers, numbersTwo);
	
	cout << endl << "Numbers" << endl;
	
	for(auto i : numbers){
		cout << i << " ";
	}
	
	cout << endl << "Numbers Two" << endl;
	
	for(auto i : numbersTwo){
		cout << i << " ";
	}
	
	cout << endl;
	
	numbers.erase(1);
	
	for(auto i : numbers){
		cout << i << " ";
	}
	
	numbers.erase(numbers.begin(), numbers.find(3));
	
	cout << endl;
		
	for(auto i : numbers){
		cout << i << " ";
	}

	return 0;
}
