#include <iostream>
#include <queue>

using namespace std;

class Node {
	public:
		int val;
		Node* left;
		Node* right;
};

string serializeBinaryTree(Node* root){
	
	string tree = "";
	
	queue<Node*> nodes;
	
	nodes.push(root);
	
	while(!nodes.empty()){
		Node* aux = nodes.front();
		nodes.pop();
		
		if(aux != NULL){
			tree += to_string(aux->val);
		} else {
			tree += "null";
		}
		
		tree += " ";
		
		if(aux != NULL){
			nodes.push(aux->left);
			nodes.push(aux->right);
		}
	}
	
	return tree;
}


int main(void){
	
	Node* root = new Node();
	Node* leftChild = new Node();
	Node* rightChild = new Node();
	Node* leftLeftChild = new Node();
	Node* leftRightChild = new Node();
	Node* rightLeftChild = new Node();
	Node* rightRightChild = new Node();
	
	
	root->val = 8;
	root->left = leftChild;
	root->right = rightChild;
	
	leftChild->val = 7;
	leftChild->left = leftLeftChild;
	leftChild->right = leftRightChild;
	
	leftLeftChild->val = 9;
	leftLeftChild->left = NULL;
	leftLeftChild->right = NULL;
	
	leftRightChild->val = 14;
	leftRightChild->left = NULL;
	leftRightChild->right = NULL;
	
	rightChild->val = 10;
	rightChild->left = rightLeftChild;
	rightChild->right = rightRightChild;
	
	rightLeftChild->val = 11;
	rightLeftChild->left = NULL;
	rightLeftChild->right = NULL;
	
	rightRightChild->val = 6;
	rightRightChild->left = NULL;
	rightRightChild->right = NULL;
	
	
	/*	Tree 1
	 *				   8
	 * 	
	 * 		 7					10
	 * 	
	 * 	9		 14			11		 6
	 * 		
	 */ 
	 
	Node* rootTwo = new Node();
	Node* leftChildTwo = new Node();
	Node* rightChildTwo = new Node();
	Node* leftLeftChildTwo = new Node();
	Node* leftRightChildTwo = new Node();
	Node* rightLeftChildTwo = new Node();
	Node* rightRightChildTwo = new Node();
	
	
	rootTwo->val = 8;
	rootTwo->left = leftChildTwo;
	rootTwo->right = rightChildTwo;
	
	leftChildTwo->val = 7;
	leftChildTwo->left = leftLeftChildTwo;
	leftChildTwo->right = leftRightChildTwo;
	
	leftLeftChildTwo->val = 9;
	leftLeftChildTwo->left = NULL;
	leftLeftChildTwo->right = NULL;
	
	leftRightChildTwo->val = 14;
	leftRightChildTwo->left = NULL;
	leftRightChildTwo->right = NULL;
	
	rightChildTwo->val = 10;
	rightChildTwo->left = rightLeftChildTwo;
	rightChildTwo->right = rightRightChildTwo;
	
	rightLeftChildTwo->val = 11;
	rightLeftChildTwo->left = NULL;
	rightLeftChildTwo->right = NULL;
	
	rightRightChildTwo->val = 6;
	rightRightChildTwo->left = NULL;
	rightRightChildTwo->right = NULL;
	
	
	/*	Tree 2
	 * 				   8
	 * 	
	 * 		 7					10
	 * 	
	 * 	9		 14			11		 6
	 * 		
	 */ 
	
	if(root == NULL && rootTwo == NULL){
		cout << "true" << endl;
	} else if(root == NULL || rootTwo == NULL){
		cout << "false" << endl;
	} else {
		string firstTree = serializeBinaryTree(root);
		string secondTree = serializeBinaryTree(rootTwo);
		
		if(firstTree == secondTree){
			cout << "true" << endl;
		} else {
			cout << "false" << endl;
		}
	}
	
	return 0;
}
