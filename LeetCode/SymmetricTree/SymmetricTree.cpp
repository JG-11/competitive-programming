#include <iostream>
#include <queue>

using namespace std;


class Node {
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
	
	
	root->val = 1;
	root->left = leftChild;
	root->right = rightChild;
	
	leftChild->val = 2;
	leftChild->left = leftLeftChild;
	leftChild->right = leftRightChild;
	
	leftLeftChild->val = 3;
	leftLeftChild->left = NULL;
	leftLeftChild->right = NULL;
	
	leftRightChild->val = 4;
	leftRightChild->left = NULL;
	leftRightChild->right = NULL;
	
	rightChild->val = 2;
	rightChild->left = rightLeftChild;
	rightChild->right = rightRightChild;
	
	rightLeftChild->val = 4;
	rightLeftChild->left = NULL;
	rightLeftChild->right = NULL;
	
	rightRightChild->val = 3;
	rightRightChild->left = NULL;
	rightRightChild->right = NULL;
	
	
	/*				   1
	 * 	
	 * 		 2					 2
	 * 	
	 * 	3		 4			4		 3
	 * 		
	 */ 
	
	
	//Algorithm
	
	bool isSymmetric = true;
	
	if(root != NULL){
		queue<Node*> nodes;
		
		nodes.push(root);
		nodes.push(root);
		
		while(!nodes.empty()){
			Node* one = nodes.front();
			nodes.pop();
			
			Node* two = nodes.front();
			nodes.pop();
			
			if(one == NULL && two == NULL){
				continue;
			}
			
			if(one == NULL || two == NULL){
				isSymmetric = false;
				break;
			}
			
			if(one->val != two->val){
				isSymmetric = false;
				break;
			}
			
			nodes.push(one->left);
			nodes.push(two->right);
			nodes.push(one->right);
			nodes.push(two->left);
		}
	}
		
	if(isSymmetric){
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
		
	return 0;
}
