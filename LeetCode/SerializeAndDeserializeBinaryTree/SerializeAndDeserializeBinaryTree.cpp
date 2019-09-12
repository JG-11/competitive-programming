#include <iostream>
#include <queue>
#include <sstream>

using namespace std;

class Node{
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
	Node* fifth = new Node();
	
	root->val = 1;
	root->left = second;
	root->right = third;
	
	second->val = 2;
	second->left = NULL;
	second->right = NULL;
	
	third->val = 3;
	third->left = fourth;
	third->right = fifth;
	
	fourth->val = 4;
	fourth->left = NULL;
	fourth->right = NULL;
	
	fifth->val = 5;
	fifth->left = NULL;
	fifth->right = NULL;
	
	//Serialization = encoding a tree to a single string
	
	string ser = "";
	
	if(root == NULL){
		cout << "Empty Tree" << endl;
	} else {
		queue<Node*> visited;
		
		visited.push(root);
		
		while(!visited.empty()){
			Node* aux = visited.front();
			
			visited.pop();
			
			if(aux != NULL){
				ser += to_string(aux->val);
				ser += " ";
			} else {
				ser += "NULL";
				ser += " ";
			}
			
			if(aux != NULL){
				visited.push(aux->left);
				visited.push(aux->right);
			}
		}
		
		cout << "Serialization" << endl;
		cout << ser << endl;
	}
	
	
	//Deserialization
	
	queue<Node*> nodes;
	
	if(ser == ""){
		cout << "Empty Tree" << endl;
	} else {
		stringstream words(ser);
		
		string word;
		
		words >> word;
		
		Node* newRoot = new Node();
		
		newRoot->val = stoi(word);
		newRoot->left = NULL;
		newRoot->right = NULL;
		
		nodes.push(newRoot);
	
		while(!nodes.empty()){
			Node* aux = nodes.front();
			
			nodes.pop();
			
			words >> word;
			
			Node* temp = new Node();
			
			if(word != "NULL"){
				temp->val = stoi(word);
				temp->left = NULL;
				temp->right = NULL;
				
				aux->left = temp;
				
				nodes.push(temp);
			}
			
			words >> word;
			
			if(word != "NULL"){
				temp->val = stoi(word);
				temp->left = NULL;
				temp->right = NULL;
				
				aux->right = temp;
				
				nodes.push(temp);
			}
		}
		
		cout << "Deserialization" << endl;
		cout << "My tree starts in root with value: " << newRoot->val << endl;
	}
	
	
	return 0;
}
