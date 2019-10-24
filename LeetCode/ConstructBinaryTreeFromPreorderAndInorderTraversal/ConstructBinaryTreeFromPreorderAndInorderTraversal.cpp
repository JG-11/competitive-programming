#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>

using namespace std;

class Node{
	public:
		int val;
		Node* left;
		Node* right;
};

int preorderIndex = 0;
int preorder[] = {3, 9, 20, 15, 7};
int inorder[] = {9, 3, 15, 20, 7};

unordered_map<int, int> indexesInorder;

Node* helper(int inorderLeft, int inorderRight){
	
	//If there is no elements to construct subtrees
	if(inorderLeft == inorderRight){
		return NULL;
	}
	
	//Pick up preorderIndex element as a root
	int rootVal = preorder[preorderIndex];
	
	Node* root = new Node();
	root->val = rootVal;
	root->left = NULL;
	root->right = NULL;
	
	//root splits inorder list into left and right subtrees
	int split = indexesInorder[rootVal];
	
	//Recursion
	preorderIndex++;
	
	//Build left subtree
	root->left = helper(inorderLeft, split);
	
	//Build right subtree
	root->right = helper(split + 1, inorderRight);
	
	return root;
}

//DFS Preorder
vector<int> getPreorder(Node* root){
	
	if(root == NULL){
		return vector<int>();
	} else {
		
		vector<int> res;
		
		stack<Node*> traversal;
		
		traversal.push(root);
		
		while(!traversal.empty()){
			Node* aux = traversal.top();
			traversal.pop();
			
			res.emplace_back(aux->val);
			
			if(aux->right != NULL){
				traversal.push(aux->right);
			}
			
			if(aux->left != NULL){
				traversal.push(aux->left);
			}
		}
		
		
		return res;
	}
}

//DFS Inorder
vector<int> getInorder(Node* root){
	
	if(root == NULL){
		return vector<int>();
	} else {
		
		vector<int> res;
		
		stack<Node*> traversal;
		
		Node* current = root;
		
		while(current != NULL || !traversal.empty()){
			while(current != NULL){
				traversal.push(current);
				current = current->left;
			}
			
			current = traversal.top();
			traversal.pop();
			
			res.emplace_back(current->val);
			
			current = current->right;
		}
		
		return res;
	}
}

int main(void){
	
	//We build an unordered map with my inorder elements (value -> its index)
	int i = 0;
	
	for(int val : inorder){
		indexesInorder[val] = i;
		i++;
	}
	
	int s = sizeof(inorder) / sizeof(inorder[0]);
	
	//We get the root of our resulting tree
	Node* treeRoot = helper(0, s);
	
	if(treeRoot == NULL){
		cout << "Empty tree" << endl;
	} else {
		
		cout << endl << "Original tree" << endl << endl;
		
		cout << "Preorder" << endl;
		
		for(int val : preorder){
			cout << val << " ";
		}
		
		cout << endl << "Inorder" << endl;
		
		for(int val : inorder){
			cout << val << " ";
		}
		
		cout << endl;
		
		
		vector<int> preorderResult = getPreorder(treeRoot);
		vector<int> inorderResult = getInorder(treeRoot);
		
		cout << endl << "Resulting tree" << endl << endl;
		
		cout << "Preorder" << endl;
		
		for(auto e : preorderResult){
			cout << e << " ";
		}
		
		cout << endl << "Inorder" << endl;
		
		for(auto e : inorderResult){
			cout << e << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}
