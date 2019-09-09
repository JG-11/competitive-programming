#include <iostream>

using namespace std;

class Node {
	public:
		int value;
		Node* next;
};

int main(void){
	
	Node* head1 = new Node();
	Node* second1 = new Node();
	Node* third1 = new Node();
	
	head1->value = 2;
	head1->next = second1;
	
	second1->value = 4;
	second1->next = third1;
	
	third1->value = 3;
	third1->next = NULL;
	
	Node* head2 = new Node();
	Node* second2 = new Node();
	Node* third2 = new Node();
	
	head2->value = 5;
	head2->next = second2;
	
	second2->value = 6;
	second2->next = third2;
	
	third2->value = 4;
	third2->next = NULL;
	
	
	string firstNumber = "", secondNumber = "";
	
	int aux1, aux2;
	
	Node* current1 = head1;
	
	while(current1 != NULL){
		aux1 = current1->value;
		firstNumber += to_string(aux1);
		current1 = current1->next;
	}
	
	reverse(firstNumber.begin(), firstNumber.end());
	
	Node* current2 = head2;
	
	while(current2 != NULL){
		aux2 = current2->value;
		secondNumber += to_string(aux2);
		current2 = current2->next;
	}
	
	reverse(secondNumber.begin(), secondNumber.end());
	
	aux1 = stoi(firstNumber);
	aux2 = stoi(secondNumber);
	
	int sum = aux1 + aux2;
	
	string result = to_string(sum);
	
	Node* head3 = new Node();
	
	aux1 = int(result[0]) - 48;
	
	head3->value = aux1;
	head3->next = NULL;
	
	Node* aux = head3;
	
	for(int i = 1; i < result.length(); i++){
		Node* newNode = new Node();
		
		newNode->value = int(result[i]) - 48;
		newNode->next = NULL;
		
		while(head3->next != NULL){
			head3 = head3->next;
		}
		
		head3->next = newNode;
	}
	
	Node* previous = NULL;
	Node* current = aux;
	
	while(current != NULL){
		Node* nextTemp = current->next;
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
