#include <iostream>

using namespace std;

class Node{
	public:
		int val;
		Node* next;
};

int main(void){
	
	Node* h1 = new Node();
	Node* e11 = new Node();
	Node* e12 = new Node();
	Node* e13 = new Node();
	
	h1->val = 1;
	h1->next = e11;
	
	e11->val = 2;
	e11->next = e12;
	
	e12->val = 3;
	e12->next = e13;
	
	e13->val = 4;
	e13->next = NULL;
	
	//1 -> 2 -> 3 -> 4 -> NULL
	
	Node* h2 = new Node();
	Node* e21 = new Node();
	Node* e22 = new Node();
	Node* e23 = new Node();
	
	h2->val = 1;
	h2->next = e21;
	
	e21->val = 2;
	e21->next = e22;
	
	e22->val = 2;
	e22->next = e23;
	
	e23->val = 3;
	e23->next = NULL;
	
	//1 -> 2 -> 2 -> 3 -> NULL
	
	//Merge both sorted lists
	
	Node* prehead = new Node();
	prehead->val = -1;
	prehead->next = NULL;
	
	Node* aux = prehead;
	
	while(h1 != NULL && h2 != NULL){
		if(h1->val <= h2->val){
			aux->next = h1;
			h1 = h1->next;
		} else {
			aux->next = h2;
			h2 = h2->next;
		}
		aux = aux->next;
 	}
 	
 	if(h1 != NULL){
		while(h1 != NULL){
			aux->next = h1;
			h1 = h1->next;
			aux = aux->next;
		}
	} else {
		while(h2 != NULL){
			aux->next = h2;
			h2 = h2->next;
			aux = aux->next;
		}
	}
	
	//1 -> 1 -> 2 -> 2 -> 2 -> 3 -> 3 -> 4 -> NULL
	
	Node* h3 = prehead->next;
	aux = h3;
	
	while(aux != NULL){
		cout << aux->val << " ";
		aux = aux->next;
	}
	
	cout << endl;	
	
	return 0;
}
