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
	Node* fourth = new Node();
	Node* fifth = new Node();
	
	root->value = 3;
	root->left = second;
	root->right = third;
	
	second->value = 9;
	second->left = NULL;
	second->right = NULL;
	
	third->value = 20;
	third->left = fourth;
	third->right = fifth;
	
	fourth->value = 15;
	fourth->left = NULL;
	fourth->right = NULL;
	
	fifth->value = 7;
	fifth->left = NULL;
	fifth->right = NULL;
	
	
	//BFS
	queue<Node*> visited;
	vector<vector<int>> levels;
	
	if(root == NULL){
		cout << "Empty Tree" << endl;
	} else {
		visited.push(root);
		
		while(!visited.empty()){
			int s = visited.size();
			
			levels.emplace_back(vector<int>());
			
			for(int i = 0; i < s; i++){
				Node* current = visited.front();
				
				visited.pop();
				
				levels.back().emplace_back(current->value);
				
				if(current->left != NULL){
					visited.push(current->left);
				}
				
				if(current->right != NULL){
					visited.push(current->right);
				}
			}
		}
		
		cout << levels.size() << endl;
	}
	
	
	return 0;
}
