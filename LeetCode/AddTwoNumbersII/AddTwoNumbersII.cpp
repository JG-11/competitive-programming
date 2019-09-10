#include <iostream>

using namespace std;

class Node {
	public:
		int val;
		Node* next;
};

int main(void){
	
	Node* l1 = new Node();
	Node* secondl1 = new Node();
	Node* thirdl1 = new Node();
	
	l1->val = 1;
	l1->next = secondl1;
	
	secondl1->val = 2;
	secondl1->next = thirdl1;
	
	thirdl1->val = 3;
	thirdl1->next = NULL;
	
	Node* l2 = new Node();
	Node* secondl2 = new Node();
	Node* thirdl2 = new Node();
	
	l2->val = 3;
	l2->next = secondl2;
	
	secondl2->val = 5;
	secondl2->next = thirdl2;
	
	thirdl2->val = 8;
	thirdl2->next = NULL;
	
	
	Node* previousl1 = NULL;
	Node* currentl1 = l1;
	
	while(currentl1 != NULL){
		Node* nextTemp = currentl1->next;
		currentl1->next = previousl1;
		previousl1 = currentl1;
		currentl1 = nextTemp;
	}
	
	Node* previousl2 = NULL;
	Node* currentl2 = l2;
	
	while(currentl2 != NULL){
		Node* nextTemp = currentl2->next;
		currentl2->next = previousl2;
		previousl2 = currentl2;
		currentl2 = nextTemp;
	}
	
	Node* headl1 = previousl1;
	Node* headl2 = previousl2;
	
	Node* dummyHead = new Node();
	
	dummyHead->val = 0;
	dummyHead->next = NULL;
	
	Node* current = dummyHead;
	
	int carry = 0;
	
	while(headl1 != NULL || headl2 != NULL){
		int x = 0, y = 0, sum;
		
		if(headl1 != NULL){
			x = headl1->val;
		}
		
		if(headl2 != NULL){
			y = headl2->val;
		}
		
		sum = x + y + carry;
		
		carry = sum / 10;
		
		Node* element = new Node();
		
		element->val = sum % 10;
		element->next = NULL;
		
		current->next = element;
		current = current->next;
		
		if(headl1 != NULL){
			headl1 = headl1->next;
		}
		
		if(headl2 != NULL){
			headl2 = headl2->next;
		}
	}
	
	if(carry > 0){
		Node* extra = new Node();
		
		extra->val = carry;
		extra->next = NULL;
		
		current = extra;
	}
	
	Node* previous = new Node();
	
	previous = NULL;
	
	Node* iterate = dummyHead->next;
	
	while(iterate != NULL){
		Node* nextTemp = iterate->next;
		iterate->next = previous;
		previous = iterate;
		iterate = nextTemp;
	} 
	
	Node* aux = previous;
	
	while(aux->next != NULL){
		cout << aux->val << " -> ";
		aux = aux->next;
	}
	
	cout << aux->val << endl;
	
	return 0;
}
