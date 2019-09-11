#include <iostream>
#include <stack>

using namespace std;

class Node {
	public:
		int val;
		Node* left;
		Node* right;
};

int main(void){
	
	Node* root = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();
	
	root->val = 1;
	root->left = second;
	root->right = third;
	
	second->val = 4;
	second->left = NULL;
	second->right = fourth;
	
	third->val = 5;
	third->left = NULL;
	third->right = NULL;
	
	fourth->val = 9;
	fourth->left = NULL;
	fourth->right = NULL;
	
	//int sum = 15; -> false
	int sum = 6;
	
	if(root == NULL){
		cout << "Empty Tree" << endl;
	} else {
		stack<Node*> preorder;
		stack<int> sums;
		
		preorder.push(root);
		sums.push(sum - root->val);
		
		bool exists = false;
		
		while(!preorder.empty()){
			Node* aux = preorder.top();
			preorder.pop();
			
			int currentSum = sums.top();
			sums.pop();
			
			if(aux->left == NULL && aux->right == NULL && currentSum == 0){
				exists = true;
				break;
			}
			
			if(aux->right != NULL){
				preorder.push(aux->right);
				sums.push(currentSum - aux->right->val);
			}
			
			if(aux->left != NULL){
				preorder.push(aux->left);
				sums.push(currentSum - aux->left->val);
			}
		}
		
		if(exists){
			cout << "true" << endl;
		} else {
			cout << "false" << endl;
		}
	}
	
	return 0;
}
