#include <iostream>
#include <list>

using namespace std;


void showList(list<int> l){
	for(auto i : l){
		cout << i << " ";
	}
	
	cout << endl;
}


int main(void){
	
	/*	Normally, when we talk about List, we talk about doubly linked list.
	 * 	For implementing a singly linked list, we use forward list.
	 */ 
	
	list<int> l, l2;
	
	for(int i = 0; i < 10; i++){
		l.push_back(i * 2);
		l2.push_front(i * 2);
	}
	
	cout << "First list (l)" << endl;
	showList(l);
	
	cout << "Second list (l2)" << endl;
	showList(l2);
	
	
	cout << "First list (l), front: " << l.front() << endl;
	cout << "First list (l), back: " << l.back() << endl;
	
	l.pop_front();
	cout << "First list (l), pop_front()" << endl;
	showList(l);
	
	l.pop_back();
	cout << "First list (l), pop_back()" << endl;
	showList(l); 
	
	l.reverse();
	cout << "Reversed first list (l)" << endl;
	showList(l);
	
	l2.sort();
	cout << "Sorted second list (l2)" << endl;
	showList(l2);
	
	return 0;
}
