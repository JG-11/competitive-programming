#include <iostream>
#include <vector>

using namespace std;


//Function to add an edge in an undirected graph
void addEdge(vector<int> adj[], int u, int v){
	
	adj[u].emplace_back(v);
	adj[v].emplace_back(u);//Comment this line to construct a directed graph
	
} 

//Function to print the adjacency list representation of graph
void printGraph(vector<int> adj[], int nodes){
	
	for(int l = 0; l < nodes; l++){
		cout << "Adjacency list of the vertex " << l << ": " << endl;
		cout << "head";
		for(int value : adj[l]){
			cout << " --> " << value;
		}
		cout << endl;
	}
	
}

int main(void){
	
	int nodes = 5;
	
	vector<int> adj[nodes];
	
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	
	printGraph(adj, nodes);
	
	return 0;
}
