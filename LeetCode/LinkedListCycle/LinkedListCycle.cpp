#include <iostream>
#include <set>

using namespace std;

class Node {
	public:
		Node* next;
		int value;
};


int main(void){
	set<Node*> addresses;
	
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();
	
	head->value = 3;
	head->next = second;
	
	second->value = 2;
	second->next = third;
	
	third->value = 0;
	third->next = fourth;
	
	fourth->value = -4;
	fourth->next = second; //There is a cycle 'cause my tail connects to my second node
	
	Node* current = head;
	
	int exists = 0;
	
	while(current != NULL){
		if(addresses.find(current) != addresses.end()){
			exists = 1;
			break;
		}
		
		addresses.insert(current);
		current = current->next;
	}
	
	if(exists == 1){
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
	
	return 0;
}
