#include <iostream>
#include <queue>

using namespace std;

int main(void){
	
	queue<int> numbers;
	
	numbers.push(20);
	numbers.push(30);
	numbers.push(40);
	
	int size = numbers.size();
	
	cout << endl << "Size: " << size << endl;
	
	int firstElement = numbers.front();
	int lastElement = numbers.back();
	
	cout << endl << "First element: " << firstElement << endl;
	cout << endl << "Last element: " << lastElement << endl;
	
	while(!numbers.empty()){
		cout << numbers.front() << " ";
		numbers.pop();
	}
	
	size = numbers.size();
	
	cout << endl << "Size: " << size << endl;
	
	if(numbers.empty()){
		cout << endl << "Empty Queue" << endl;
	}
	
	return 0;
}
