#include <iostream>

using namespace std;

class Node {
	public:
		int data;
		Node* reference;
};

void printList(Node* n){
	while(n != NULL){
		cout << "data: " << n->data << endl;
		cout << "next: " << n->reference << endl << endl;
		
		n = n->reference;
	}
}

Node* addElementAtTheFront(Node* head, int newData){
	Node* newNode = new Node();//We create a new node
	
	newNode->data = newData;//We assign the new data
	newNode->reference = head;//We set the last head as reference to the new node
	
	head = newNode;//We set our new head as newNode
	
	return head;//We return our new head node
}

void addElementAfterGivenNode(Node* n, int newData){
	if(n == NULL){
		cout << "Previous node cannot be NULL" << endl;
		return;
	}
	
	Node* newNode = new Node();
	
	newNode->data = newData;
	newNode->reference = n->reference;
	
	n->reference = newNode;
	
	return;
}

void addElementAtTheEnd(Node* head, int newData){
	Node* newNode = new Node();
	
	newNode->data = newData;
	newNode->reference = NULL;
	
	Node* last = head;
	
	while(last->reference != NULL){
		last = last->reference;
	}
	
	last->reference = newNode;
	
	return;
}

void deleteNode(Node* head, int key){
	
	Node* aux = head;
	
	if(head == NULL){
		cout << "Empty list" << endl; 
		return;
	} else if(head->data == key){
		head = aux->reference;
		free(aux); 
		return;
	}
	
	Node* previous = new Node();
	
	while(aux != NULL && aux->data != key){
		previous = aux;
		aux = previous->reference;
	}
	
	if(aux == NULL){
		cout << "Key does not exist in the list" << endl;
		return;
	} else {
		previous->reference = aux->reference;
		free(aux);
	}
	
	return;
}

int main(void){
	
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	head->data = 1;
	head->reference = second;
	
	second->data = 2;
	second->reference = third;
	
	third->data = 3;
	third->reference = NULL;
	
	//printList(head);
	
	int newData = -1;
	
	Node* newHead = addElementAtTheFront(head, newData);
	
	//printList(newHead);
	
	newData = 8;
	
	addElementAfterGivenNode(newHead, newData);
	
	//printList(newHead);
	
	newData = 15;
	
	addElementAtTheEnd(newHead, newData);
	
	//printList(newHead);
	
	int key = 8;
	
	deleteNode(newHead, key);
	
	printList(newHead);
	
	return 0;
}
