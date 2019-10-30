#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <queue>

using namespace std;


class Node {
	public:
		int val;
		vector<Node*> neighbors;
};


int main(void){
	
	//Undirected graph
	Node* A = new Node();
	Node* B = new Node();
	Node* C = new Node();
	Node* D = new Node();
	Node* E = new Node();
	Node* F = new Node();
		
	A->val = 1;
	A->neighbors = {B, C, F};
	
	B->val = 2;
	B->neighbors = {A, C, D, E, F};
	
	C->val = 3;
	C->neighbors = {A, B, E};
	
	D->val = 4;
	D->neighbors = {B, E};
	
	E->val = 5;
	E->neighbors = {B, C, D};
	
	F->val = 6;
	F->neighbors = {A, B};
	
	
	/*	Depth First Search
	 *	Time Complexity = O(|V| + |E|)
	 *	Space Complexity = O(|V|)
	 */  	
	
	//We use a stack to do not implement a recursive function
	stack<Node*> dfs;
	
	//We choose the data structure for our seen nodes
	set<Node*> seen;
	
	//We add the first node to start the search
	dfs.push(A);
	
	cout << "DFS: "; 
	
	while(!dfs.empty()){
		Node* current = dfs.top();
		dfs.pop(); //We pop a node
			
		//We process the node if it is unseen
		if(seen.find(current) == seen.end()){
			seen.insert(current);
			cout << current->val << " ";
		}
		
		//We add the unseen children
		for(Node* neighbor : current->neighbors){
			if(seen.find(neighbor) == seen.end()){
				dfs.push(neighbor);
			}
		}
	}
	
	
	/*	Breadth First Search
	 *	Time Complexity = O(|V| + |E|)
	 *	Space Complexity = O(|V|)
	 */ 
	 
	//BFS is the same than DFS, except for the data structure that we use
	 
	queue<Node*> bfs;//Now we use a queue
	
	seen = {};
	
	bfs.push(A);
	
	cout << endl << "BFS: ";
	
	while(!bfs.empty()){
		Node* current = bfs.front();
		bfs.pop();
		
		if(seen.find(current) == seen.end()){
			seen.insert(current);
			cout << current->val << " ";
		}
		
		for(Node* neighbor : current->neighbors){
			if(seen.find(neighbor) == seen.end()){
				bfs.push(neighbor);
			}
		}
	}
	
	
	return 0;
}
