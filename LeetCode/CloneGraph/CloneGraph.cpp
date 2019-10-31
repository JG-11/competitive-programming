#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;


class Node{
	public:
		int val;
		vector<Node*> neighbors;
		
};


int main(void){
	
	//Simple connected undirected graph
	Node* one = new Node();
	Node* two = new Node();
	Node* three = new Node();
	Node* four = new Node();
	
	one->val = 1;
	one->neighbors = {two, four};
	
	two->val = 2;
	two->neighbors = {one, three};
	
	three->val = 3;
	three->neighbors = {two, four};
	
	four->val = 4;
	four->neighbors = {one, three};
	
	
	/*	To clone a graph we need to traverse it (BFS/DFS), and we need
	 * 	to have a copy of each node and avoid copying the same node for
	 * 	multiple times. So we need a mapping from an original node
	 * 	to its copy.
	 * 
	 * 	I will choose BFS because I am only interested in the node relationships.
	 */ 
	 
	 
	/*	Time Complexity: O(|V| + |E|)
	 * 	Space Complexity: O(|V| + |E|)
	 */
	 
	
	if(one == NULL){
		cout << "NULL" << endl;
	} else {
		queue<Node*> originalNodes;
		map<Node*, Node*> clonedNodes;
	
		originalNodes.push(one);
		
		Node* copy = new Node();
		copy->val = one->val;
		copy->neighbors = {};
		
		clonedNodes[one] = copy;
		
		while(!originalNodes.empty()){
			Node* current = originalNodes.front();
			originalNodes.pop();
			
			for(Node* adjacent : current->neighbors){
				if(clonedNodes.find(adjacent) == clonedNodes.end()){
					Node* cloned = new Node();
					cloned->val = adjacent->val;
					cloned->neighbors = {};
					
					clonedNodes[adjacent] = cloned;
					
					originalNodes.push(adjacent);
				}
				clonedNodes[current]->neighbors.emplace_back(clonedNodes[adjacent]);
			}
		}
		
		//I return the copy of the given node as a reference to the cloned graph
		cout << "Entry point copy: " << copy->val << endl;
	}
	
	return 0;
}
