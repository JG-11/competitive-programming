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
	Node* leftChild = new Node();
	Node* rightChild = new Node();
	Node* leftLeftChild = new Node();
	Node* leftRightChild = new Node();
	Node* rightLeftChild = new Node();
	Node* rightRightChild = new Node();
	
	root->val = 6;
	root->left = leftChild;
	root->right = rightChild;
	
	leftChild->val = 4;
	leftChild->left = leftLeftChild;
	leftChild->right = leftRightChild;
	
	rightChild->val = 8;
	rightChild->left = rightLeftChild;
	rightChild->right = rightRightChild;
	
	leftLeftChild->val = 3;
	leftLeftChild->left = NULL;
	leftLeftChild->right = NULL;
	
	leftRightChild->val = 5;
	leftRightChild->left = NULL;
	leftRightChild->right = NULL;
	
	rightLeftChild->val = 7;
	rightLeftChild->left = NULL;
	rightLeftChild->right = NULL;
	
	rightRightChild->val = 9;
	rightRightChild->left = NULL;
	rightRightChild->right = NULL;
	
	
	/*				6
	 * 		4				8
	 * 	3		5		7		9
	 * 
	 * Output: 6, 4, 8, 3, 5, 7, 9, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
	 */ 
	
	
	//Serialize
	string data = "";
	
	if(root == NULL){
		cout << "Empty tree" << endl;
	} else {
		queue<Node*> nodes;
		nodes.push(root);
		
		while(!nodes.empty()){
			Node* aux = nodes.front();
			nodes.pop();
			
			if(aux != NULL){
				data += to_string(aux->val);
			} else {
				data += "NULL";
			}
			
			data += " ";
			
			if(aux != NULL){
				nodes.push(aux->left);
				nodes.push(aux->right);
			}
		}
		
		cout << "Serialization" << endl << data << endl;
	}
	
	
	//Deserialize
	if(data == ""){
		cout << "Empty tree" << endl;
	} else {
		stringstream words(data);
		
		string word;
		
		words >> word;
		
		Node* root = new Node();
		root->val = stoi(word);
		root->left = NULL;
		root->right = NULL;
		
		queue<Node*> nodes;
		nodes.push(root);
		
		while(!nodes.empty()){
			Node* aux = nodes.front();
			nodes.pop();
			
			words >> word;
			
			if(word != "NULL"){
				Node* temp = new Node();
				temp->val = stoi(word);
				temp->left = NULL;
				temp->right = NULL;
				
				aux->left = temp;
				
				nodes.push(temp);
			}
			
			words >> word;
			
			if(word != "NULL"){
				Node* temp = new Node();
				temp->val = stoi(word);
				temp->left = NULL;
				temp->right = NULL;
				
				aux->right = temp;
				
				nodes.push(temp);
			}
		}
		
		cout << endl << "Deserialization" << endl;
		cout << "Root: " << root->val << endl;
	}
	
	
	return 0;
}
