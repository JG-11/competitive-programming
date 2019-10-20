#include <iostream>
#include <stack>

using namespace std;

class Node{
	public:
		int val;
		Node* left;
		Node* right;
};

int main(void){
	
	Node* root = new Node();
	Node* leftChild = new Node();
	Node* rightChild = new Node();
	Node* leftLeftChild = new Node();
	Node* leftRightChild = new Node();
	Node* rightLeftChild = new Node();
	Node* rightRightChild = new Node();
	
	/*				6
	 * 		4				8
	 * 	3		5		7		9
	 * 
	 * Output: true
	 */ 
	
	root->val = 6;
	root->left = leftChild;
	root->right = rightChild;
	
	leftChild->val = 4;
	leftChild->left = leftLeftChild;
	leftChild->right = leftRightChild;
	
	rightChild->val = 8;
	rightChild->left = rightLeftChild;
	rightChild->right = rightRightChild;
	
	leftLeftChild->val = 3;
	leftLeftChild->left = NULL;
	leftLeftChild->right = NULL;
	
	leftRightChild->val = 5;
	leftRightChild->left = NULL;
	leftRightChild->right = NULL;
	
	rightLeftChild->val = 7;
	rightLeftChild->left = NULL;
	rightLeftChild->right = NULL;
	
	rightRightChild->val = 9;
	rightRightChild->left = NULL;
	rightRightChild->right = NULL;
	
	
	/*				6
	 * 		4				4
	 * 	3		5		7		9
	 * 
	 * Output: false
	 * 
	
	root->val = 6;
	root->left = leftChild;
	root->right = rightChild;
	
	leftChild->val = 4;
	leftChild->left = leftLeftChild;
	leftChild->right = leftRightChild;
	
	rightChild->val = 4;
	rightChild->left = rightLeftChild;
	rightChild->right = rightRightChild;
	
	leftLeftChild->val = 3;
	leftLeftChild->left = NULL;
	leftLeftChild->right = NULL;
	
	leftRightChild->val = 5;
	leftRightChild->left = NULL;
	leftRightChild->right = NULL;
	
	rightLeftChild->val = 7;
	rightLeftChild->left = NULL;
	rightLeftChild->right = NULL;
	
	rightRightChild->val = 9;
	rightRightChild->left = NULL;
	rightRightChild->right = NULL;
	*/
	
	
	//Inorder traversal
	
	if(root == NULL){
		cout << "true" << endl;
	} else {
		Node* current = root;
		
		stack<Node*> inorder;
		
		long before = LONG_MIN;
		
		int actual;
		
		bool isValid = true;
		
		while(current != NULL || !inorder.empty()){
			while(current != NULL){
				inorder.push(current);
				current = current->left;
			}
			
			current = inorder.top();
			
			inorder.pop();
			
			actual = current->val;
			
			if(actual <= before){
				isValid = false;
				break;
			}
			
			before = actual;
			
			current = current->right;
		}
		
		if(isValid){
			cout << "true" << endl;
		} else {
			cout << "false" << endl;
		}
	}
	
	return 0;
}
