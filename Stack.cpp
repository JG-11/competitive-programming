#include <iostream>
#include <stack>

using namespace std;

int main(void){
	
	//LIFO type of working
	
	stack <int> numbers;
	
	numbers.push(10);
	numbers.push(20);
	numbers.push(30);
	numbers.push(40);
	
	while(!numbers.empty()){
		cout << numbers.top() << ", ";
		numbers.pop();
	}
	
	if(numbers.empty()){
		cout << endl << "Numbers Stack is empty" << endl;
	}
	
	stack <double> swap1;
	
	swap1.push(2.5);
	swap1.push(3.4);
	
	stack <double> swap2;
	
	swap2.push(2.4);
	swap2.push(3.5);

	swap(swap1, swap2);
	
	cout << endl << endl << "-----SWAPPED-----" << endl;
	
	cout << endl << "Swap1" << endl;
	
	while(!swap1.empty()){
		cout << swap1.top() << ", ";
		swap1.pop();
	}
	
	cout << endl << endl << "Swap2" << endl;
	
	while(!swap2.empty()){
		cout << swap2.top() << ", ";
		swap2.pop();
	}
	
	return 0;
}
