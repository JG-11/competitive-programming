#include <iostream>

using namespace std;

class Node{
	public:
		int val;
		Node* next;
		Node* random;
};

int main(void){
	
	Node* head = new Node();
	Node* e1 = new Node();
	Node* e2 = new Node();
	
	head->val = 4;
	head->next = e1;
	head->random = e2;
	
	e1->val = 7;
	e1->next = e2;
	e1->random = head;
	
	e2->val = -2;
	e2->next = NULL;
	e2->random = NULL;
	
	
	if(head == NULL){
		cout << "NULL" << endl;
	} else {
		//1. Creating a new weaved list of original and copied nodes
		
		Node* ptr = head;
		
		while(ptr != NULL){
			//Cloned node and inserting it just next to the original node
			Node* cloned = new Node();
			cloned->val = ptr->val;
			cloned->next = ptr->next;
			
			ptr->next = cloned;
			
			ptr = cloned->next;
		}
		
		//2. Now link the random pointers of the new nodes created
		
		ptr = head;
		
		while(ptr != NULL){
			if(ptr->random != NULL){
				ptr->next->random = ptr->random->next;
			} else {
				ptr->next->random = NULL;
			}
			
			ptr = ptr->next->next;
		}
		
		
		//3. Unweave the linked list to get back the original linked list and the cloned list
		
		Node* ptrOldList = head;
		Node* ptrNewList = head->next;
		
		Node* headCopy = ptrNewList;
		
		while(ptrOldList != NULL){
			ptrOldList->next = ptrOldList->next->next;
			ptrOldList = ptrOldList->next;
			
			if(ptrNewList->next != NULL){
				ptrNewList->next = ptrNewList->next->next;
			} else {
				ptrNewList->next = NULL;
			} 
			
			ptrNewList = ptrNewList->next;
		}
		
		cout << "Copy of the given head as a reference to the cloned list" << endl;
		cout << headCopy->val << endl;
	}
	
	return 0;
}
