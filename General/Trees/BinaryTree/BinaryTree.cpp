#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Node {
	public:
		int data;
		Node* left;
		Node* right;
};

int main(void){
	
	Node* root = new Node();
	Node* leftChild = new Node();
	Node* rightChild = new Node();
	Node* leftLeftChild = new Node();
	Node* leftRightChild = new Node();
	
	root->data = 1;
	root->left = leftChild;
	root->right = rightChild;
	
	leftChild->data = 2;
	leftChild->left = leftLeftChild;
	leftChild->right = leftRightChild;
	
	rightChild->data = 3;
	rightChild->left = NULL;
	rightChild->right = NULL;
	
	leftLeftChild->data = 4;
	leftLeftChild->left = NULL;
	leftLeftChild->right = NULL;
	
	leftRightChild->data = 5;
	leftRightChild->left = NULL;
	leftRightChild->right = NULL;
	
	
	//Preorder traversal
	vector<int> preorder;
	
	stack<Node*> preorderNodes;
	
	if(root == NULL){
		cout << "Empty tree" << endl;
	} else {
		preorderNodes.push(root);
		
		while(!preorderNodes.empty()){
			Node* newNode = new Node();
			
			newNode = preorderNodes.top();
			preorderNodes.pop();
			
			preorder.emplace_back(newNode->data);
			
			if(newNode->right != NULL){
				preorderNodes.push(newNode->right);
			}
			
			if(newNode->left != NULL){
				preorderNodes.push(newNode->left);
			}
		}
		
		cout << "Preorder" << endl;
		
		for(auto x : preorder){
			cout << x << " ";
		}
		
		cout << endl;
	}
	
	
	//Inorder traversal
	vector<int> inorder;
	
	stack<Node*> inorderNodes;
	
	Node* current = root;
	
	if(current != NULL){
		while(current != NULL || !inorderNodes.empty()){
			while(current != NULL){
				inorderNodes.push(current);
				current = current->left;
			}
			
			current = inorderNodes.top();
			inorderNodes.pop();
			inorder.emplace_back(current->data);
			current = current->right;
		}
		
		cout << "Inorder" << endl;
		
		for(auto x : inorder){
			cout << x << " ";
		}
		
		cout << endl;
	} else {
		cout << "Empty tree" << endl;
	}
	
	
	//Postorder traversal
	vector<int> postorder;
	
	stack<Node*> postorderNodes;
	
	if(root == NULL){
		cout << "Empty tree" << endl;
	} else {
		postorderNodes.push(root);
		
		while(!postorderNodes.empty()){
			Node* newNode = postorderNodes.top();
			
			postorderNodes.pop();
			
			postorder.emplace_back(newNode->data);
			
			if(newNode->left != NULL){
				postorderNodes.push(newNode->left);
			}
			
			if(newNode->right != NULL){
				postorderNodes.push(newNode->right);
			}
		}
		
		cout << "Postorder" << endl;
		
		reverse(postorder.begin(), postorder.end());
		
		for(auto x : postorder){
			cout << x << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}
