#include <iostream>
#include <set>

using namespace std;

int main(void){
	
	multiset<int> numbers;
	
	numbers.insert(10);
	numbers.insert(20);
	numbers.insert(20);//Multiset allows repeated values
	numbers.insert(30);
	
	multiset<int>::iterator itr;
	
	for(itr = numbers.begin(); itr != numbers.end(); itr++){
		cout << *itr << endl;
	}
	
	cout << endl; 
	
	set<int> numbersTwo;
	
	numbersTwo.insert(1);
	numbersTwo.insert(2);
	numbersTwo.insert(3);
	
	int amountMultiset = numbers.count(20);
	
	cout << endl << amountMultiset;
	
	int amountSet = numbersTwo.count(3);
	
	cout << endl << amountSet;
	
	return 0;
}

