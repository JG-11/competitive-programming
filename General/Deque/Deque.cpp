#include <iostream>
#include <deque>

using namespace std;

int main(void){
	
	deque<int> d;
	
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_back(4);
	
	for(auto i : d){
		cout << i << " ";
	}
	
	int back = d.back();
	
	cout << endl << "Back: " << back;
	
	cout << endl;
	
	d.pop_back();
	
	for(auto i : d){
		cout << i << " ";
	}
	
	cout << endl;
	
	d.pop_back();
	d.pop_back();
	d.pop_back();
	
	d.push_front(1);
	d.push_front(2);
	d.push_front(3);
	d.push_front(4);
	
	for(auto i : d){
		cout << i << " ";
	}
	
	int front = d.front();
	
	cout << endl << "Front: " << front;
	
	d.pop_front();
	
	cout << endl;
	
	for(auto i : d){
		cout << i << " ";
	}
	
	return 0;
}
