#include <iostream>
#include <vector>

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
	
	Node* h2 = new Node();
	Node* e21 = new Node();
	
	//Case 1: intersection exists
	//1 -> 2 -> 4 -> NULL
	
	h1->val = 1;
	h1->next = e11;
	
	e11->val = 2;
	e11->next = e12;
	
	e12->val = 4;
	e12->next = NULL;
	
	//1 -> 3 -> 4 -> NULL
	
	h2->val = 1;
	h2->next = e21;
	
	e21->val = 3;
	e21->next = e12; //Intersection in node with value 4
	
	/*	1 -> 2 
	 * 			-> 4 -> NULL
	 * 	1 -> 3 
	 * 
	 *
	*/
	
	/*
	//Case 2: no intersection
	//1 -> 2 -> 4 -> NULL
	
	h1->val = 1;
	h1->next = e11;
	
	e11->val = 2;
	e11->next = e12;
	
	e12->val = 4;
	e12->next = NULL;
	
	//1 -> 3 -> 4 -> NULL
	
	Node* e22 = new Node();
	
	h2->val = 1;
	h2->next = e21;
	
	e21->val = 3;
	e21->next = e22; 
	
	e22->val = 4;
	e22->next = NULL;
	
	 *	1 -> 2 -> 4 -> NULL
	 * 	1 -> 3 -> 4 -> NULL 
	 *
	*/
	
	vector<Node*> nodes;
	
	Node* aux = h1;
	
	while(aux != NULL){
		nodes.emplace_back(aux);
		aux = aux->next;
	}
	
	aux = h2;
	
	bool exists = false;
	
	for(Node* n : nodes){
		if(n == aux){
			exists = true;
			break;
		}
		aux = aux->next;
	}
	
	if(exists){
		cout << aux->val << endl;
	} else {
		cout << "NULL" << endl;
	}
	
	return 0;
}
