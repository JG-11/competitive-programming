#include <iostream>
#include <vector>

#define LIMIT 300000

using namespace std;

bool visited[300010];

int dest;

bool ok;

vector<int> adj[LIMIT];

void dfs(int actual)
{
	if(actual == dest)
	{
		ok = true;
		return;
	}
	
	if(!visited[actual])
	{
		for(int to : adj[actual])
		{
			if(!visited[to])
			{
				visited[to] = true;
				
				dfs(to);
			}
		}
	}
}

int main(void){
	
	int nodes, lines , g;
	
	int u, v;
	
	cin >> nodes >> lines;
	
	for(int i = 0; i < lines; i++){
		cin >> u >> v; 
		
		adj[u].emplace_back(v);
		//adj[v].emplace_back(u);
	}
	
	for(int i = 1; i <= nodes; i++){
		for(auto x : adj[i]){
			cout << endl << "Node " << i << " has " << x << " as contiguous element" << endl;
		}
	} 
	
	cin >> g >> dest;
	
	dfs(g);
	
	if(ok)
	{
		cout << "puedo visitar ciudad " << dest << " partiendo de " << g << endl;
	}
	else
	{
		cout << "no se pudo" << endl;
	}
	
	return 0;
}
