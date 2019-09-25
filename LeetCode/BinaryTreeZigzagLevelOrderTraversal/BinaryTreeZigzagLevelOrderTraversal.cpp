#include <iostream>
#include <queue>
#include <vector>

class Node{
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
	Node* rightChildLeft = new Node();
	Node* rightChildRight = new Node();
	
	root->val = 1;
	root->left = leftChild;
	root->right = rightChild;
	
	leftChild->val = 2;
	leftChild->left = NULL;
	leftChild->right = NULL;
	
	rightChild->val = 3;
	rightChild->left = rightChildLeft;
	rightChild->right = rightChildRight;
	
	rightChildLeft->val = 4;
	rightChildLeft->left = NULL;
	rightChildLeft->right = NULL;
	
	rightChildRight->val = 5;
	rightChildRight->left = NULL;
	rightChildRight->right = NULL;
	
	//BFS
	vector<vector<int>> levels;
	vector<int> elements;
	
	queue<Node*> visited;
	
	bool rightToLeft = false;
	
	if(root == NULL){
		cout << "Empty Tree" << endl;
	} else {
		visited.push(root);
		
		while(!visited.empty()){
			int s = visited.size();
			
			for(int i = 0; i < s; i++){
				Node* aux = visited.front();
				visited.pop();
				
				elements.emplace_back(aux->val);
				
				if(aux->left != NULL){
					visited.push(aux->left);
				}
					
				if(aux->right != NULL){
					visited.push(aux->right);
				}
			}
			
			if(rightToLeft){
				reverse(elements.begin(), elements.end());
				
				rightToLeft = false;
			} else {
				rightToLeft = true;
			}
			
			levels.emplace_back(elements);
			
			elements = {};
		}
		
		cout << "Binary Tree Zigzag Level Order Traversal" << endl;
		
		for(auto l : levels){
			for(auto e : l){
				cout << e << " ";
			}
			cout << endl;
		}
	}
	
	return 0;
}
