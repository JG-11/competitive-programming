#include <iostream>

using namespace std;

class Node {
	public:
		int val;
		Node* left;
		Node* right;
};

Node* LCA(Node* root, Node* p, Node* q){
	if(root == NULL){
		return NULL;
	}
	
	if(root == p || root == q){
		return root;
	}
	
	Node* left = LCA(root->left, p, q);
	Node* right = LCA(root->right, p, q);
	
	if(left != NULL && right != NULL){
		return root;
	}
	
	if(left == NULL && right == NULL){
		return NULL;
	}
	
	if(left != NULL){
		return left;
	} else {
		return right;
	}
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
	
	
	/*				   8
	 * 	
	 * 		 7					10
	 * 	
	 * 	9		 14			11		 6
	 * 		
	 */ 

	
	//Algorithm
	
	Node* res = LCA(root, rightRightChild, rightLeftChild);
	
	if(res != NULL){
		cout << res->val << endl;
	} else {
		cout << "NULL" << endl;
	}
	
	return 0;
}
