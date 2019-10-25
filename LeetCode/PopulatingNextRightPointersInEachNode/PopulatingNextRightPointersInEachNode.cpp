#include <iostream>
#include <queue>

using namespace std;

class Node{
	public:
		int val;
		Node* left;
		Node* right;
		Node* next;
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
	root->next = NULL;
	
	leftChild->val = 2;
	leftChild->left = leftLeftChild;
	leftChild->right = leftRightChild;
	leftChild->next = NULL;
	
	leftLeftChild->val = 4;
	leftLeftChild->left = NULL;
	leftLeftChild->right = NULL;
	leftLeftChild->next = NULL;
	
	leftRightChild->val = 5;
	leftRightChild->left = NULL;
	leftRightChild->right = NULL;
	leftRightChild->next = NULL;
	
	rightChild->val = 3;
	rightChild->left = rightLeftChild;
	rightChild->right = rightRightChild;
	rightChild->next = NULL;
	
	rightLeftChild->val = 6;
	rightLeftChild->left = NULL;
	rightLeftChild->right = NULL;
	rightLeftChild->next = NULL;
	
	rightRightChild->val = 7;
	rightRightChild->left = NULL;
	rightRightChild->right = NULL;
	rightRightChild->next = NULL;
	
	
	/*				   1
	 * 	
	 * 		 2					 3
	 * 	
	 * 	4		  5			6		  7
	 * 		
	 */
	 
	if(root == NULL){
		cout << "root = NULL" << endl;
	} else {
		
		queue<Node*> nodes;
		
		nodes.push(root);
		
		while(!nodes.empty()){
			int s = nodes.size();
			
			Node* prev = NULL;
			
			for(int i = 0; i < s; i++){
				Node* current = nodes.front();
				nodes.pop();
				
				if(prev){
					prev->next = current;
				}
				
				if(current->left){
					nodes.push(current->left);
				}
				
				if(current->right){
					nodes.push(current->right);
				}
				
				prev = current;
			}
		}
		
		cout << "root = " << root->val << endl;
	}
	
	return 0;
}
