#include <iostream>

using namespace std;

class Node {
	public:
		int val;
		Node* next;
};

int main(void){
	
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	head->val = 1;
	head->next = second;
	
	second->val = 2;
	second->next = third;
	
	third->val = 3;
	third->next = head;
	
	
	/*	1	2	3	1
	 * 	Output = true
	 */
	 
	if(head == NULL){
		cout << "false" << endl;
	} else {
		Node* slow = head;
		Node* fast = head->next;
		
		bool exists = true;
		
		while(slow != fast) {
			if(fast == NULL || fast->next == NULL){
				exists = false;
				break;
			}
			
			slow = slow->next;
			fast = fast->next->next;
		}
		
		if(exists){
			cout << "true" << endl;
		} else {
			cout << "false" << endl;
		}
	}

	return 0;
}
