#include <iostream>
#include <queue>
#include <vector>

using namespace std;


class Node {
	public:
		int value;
		Node* left;
		Node* right;
};


int main(void){
	
	Node* root = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	root->value = 1;
	root->left = second;
	root->right = third;
	
	second->value = 2;
	second->left = NULL;
	second->right = NULL;
	
	third->value = 3;
	third->left = NULL;
	third->right = NULL;
	
	
	queue<Node*> visited;
	vector<vector<int>> levels;
	
	if(root == NULL){
		cout << "Empty tree" << endl;
	} else {
		visited.push(root);
		levels.emplace_back(vector<int>());
		
		cout << "Level Order Traversal" << endl;
		
		while(!visited.empty()){
			int s = visited.size();
			
			for(int i = 0; i < s; i++){
				
				Node* current = visited.front();
				
				visited.pop();
				
				levels.back().emplace_back(current->value);
				
				cout << current->value << " ";
				
				if(current->left != NULL){
					visited.push(current->left);
				}
				
				if(current->right != NULL){
					visited.push(current->right);
				}
			}
			
			cout << endl;	
		}
	}

	return 0;
}
