#include <iostream>

using namespace std;

class Node {
	public:
		int value;
		Node* next;
};

int main(void){
	
	Node* headl1 = new Node();
	Node* secondl1 = new Node();
	Node* thirdl1 = new Node();
	
	headl1->value = 2;
	headl1->next = secondl1;
	
	secondl1->value = 4;
	secondl1->next = thirdl1;
	
	thirdl1->value = 3;
	thirdl1->next = NULL;
	
	Node* headl2 = new Node();
	Node* secondl2 = new Node();
	Node* thirdl2 = new Node();
	
	headl2->value = 5;
	headl2->next = secondl2;
	
	secondl2->value = 6;
	secondl2->next = thirdl2;
	
	thirdl2->value = 4;
	thirdl2->next = NULL;
	
	//Algorithm
	Node* dummyHead = new Node();
	
	dummyHead->value = 0;
	dummyHead->next = NULL;
	
	Node* head1 = headl1;
	Node* head2 = headl2;
	
	Node* current = dummyHead;
	
	int carry = 0;
	
	while(head1 != NULL || head2 != NULL){
		int x, y, sum;
		
		if(head1 != NULL){
			x = head1->value;
		} else {
			x = 0;
		}
		
		if(head2 != NULL){
			y = head2->value;
		} else {
			y = 0;
		}
		
		sum = x + y + carry;
		
		carry = sum / 10;
		
		Node* element = new Node();
		
		element->value = sum % 10;
		element->next = NULL;
		
		current->next = element;
		
		current = current->next;
		
		if(head1 != NULL){
			head1 = head1->next;
		}
		
		if(head2 != NULL){
			head2 = head2->next;
		}
	}
	
	
	if(carry > 0){
		Node* extra = new Node();
		
		extra->value = carry;
		extra->next = NULL;
		
		current->next = extra;
	}
	
	
	Node* iterate = dummyHead->next;

	
	while(iterate->next != NULL){
		cout << iterate->value << " ";
		iterate = iterate->next;
	}
	
	cout << iterate->value;
	
	return 0;
}
