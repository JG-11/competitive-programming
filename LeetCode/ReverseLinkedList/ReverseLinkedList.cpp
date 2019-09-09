#include <iostream>

using namespace std;

class Node{
	public:
		int value;
		Node* next;
};

int main(void){
	
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	head->value = 1;
	head->next = second;
	
	second->value = 2;
	second->next = third;
	
	third->value = 3;
	third->next = NULL;
	
	Node* previous = NULL;
	Node* current = head;
	Node* nextTemp = new Node();
	
	while(current != NULL){
		nextTemp = current->next;
		current->next = previous;
		previous = current;
		current = nextTemp;
	}
	
	while(previous != NULL){
		cout << previous->value << " ";
		previous = previous->next;
	}

	return 0;
}
