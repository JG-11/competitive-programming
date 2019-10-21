#include <iostream>

class Node {
	public:
		int val;
		Node* left;
		Node* right;
};

using namespace std;


int main(void){
	
	Node* root = new Node();
	Node* leftChild = new Node();
	Node* rightChild = new Node();
	Node* leftLeftChild = new Node();
	Node* leftRightChild = new Node();
	Node* leftRightLeftChild = new Node();
	Node* leftRightRightChild = new Node();
	Node* rightLeftChild = new Node();
	Node* rightRightChild = new Node();
	
	
	root->val = 6;
	root->left = leftChild;
	root->right = rightChild;
	
	leftChild->val = 2;
	leftChild->left = leftLeftChild;
	leftChild->right = leftRightChild;
	
	leftLeftChild->val = 0;
	leftLeftChild->left = NULL;
	leftLeftChild->right = NULL;
	
	leftRightChild->val = 4;
	leftRightChild->left = leftRightLeftChild;
	leftRightChild->right = leftRightRightChild;
	
	leftRightLeftChild->val = 3;
	leftRightLeftChild->left = NULL;
	leftRightLeftChild->right = NULL;
	
	leftRightRightChild->val = 5;
	leftRightRightChild->left = NULL;
	leftRightRightChild->right = NULL;
	
	rightChild->val = 8;
	rightChild->left = rightLeftChild;
	rightChild->right = rightRightChild;
	
	rightLeftChild->val = 7;
	rightLeftChild->left = NULL;
	rightLeftChild->right = NULL;
	
	rightRightChild->val = 9;
	rightRightChild->left = NULL;
	rightRightChild->right = NULL;
	
	
	/*				6
	 * 	
	 * 		 2				8
	 * 	
	 * 	0		  4		7		9
	 * 			
	 * 			3	5
	 */ 
	
	
	//Algorithm
	/*Note: in essence this problem is iterative, it just wants us to find
	 *the split point = the point from where p and q won't be part of the same
	 *subtree or when one is the parent of the other*/
	 
	if(root == NULL){
		cout << "NULL" << endl;
	} else {
		int p, q;
		
		cin >> p >> q;
		
		Node* current = root;
		
		while(current != NULL){
			if(p < current->val && q < current->val){
				current = current->left;
			} else if(p > current->val && q > current->val){
				current = current->right;
			} else {
				break;
			}
		}
		
		if(current != NULL){
			cout << current->val << endl;
		} else {
			cout << "NULL" << endl;
		}
	}

	
	return 0;
}
