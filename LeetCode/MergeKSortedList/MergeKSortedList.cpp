#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Node{
	public:
		int val;
		Node* next;
};

int main(void){
	
	Node* h1 = new Node();
	Node* e11 = new Node();
	Node* e12 = new Node();
	
	Node* h2 = new Node();
	Node* e21 = new Node();
	Node* e22 = new Node();
	
	Node* h3 = new Node();
	Node* e31 = new Node();
	Node* e32 = new Node();
	
	//1 -> 2 -> 3 -> NULL
	h1->val = 1;
	h1->next = e11;
	
	e11->val = 2;
	e11->next = e12;
	
	e12->val = 3;
	e12->next = NULL;
	
	
	//2 -> 3 -> 4 -> NULL
	h2->val = 2;
	h2->next = e21;
	
	e21->val = 3;
	e21->next = e22;
	
	e22->val = 4;
	e22->next = NULL;
	
	
	//3 -> 4 -> 5 -> NULL
	h3->val = 3;
	h3->next = e31;
	
	e31->val = 4;
	e31->next = e32;
	
	e32->val = 5;
	e32->next = NULL;
	
	
	/*	[
	 * 		[1, 2, 3],
	 * 		[2, 3, 4],
	 * 		[3, 4, 5]
	 * 	]
	 */ 
	
	vector<vector<Node*>> lists;
	
	lists.emplace_back();
	lists.back().emplace_back(h1);
	lists.back().emplace_back(e11);
	lists.back().emplace_back(e12);
	
	lists.emplace_back();
	lists.back().emplace_back(h2);
	lists.back().emplace_back(e21);
	lists.back().emplace_back(e22);
	
	lists.emplace_back();
	lists.back().emplace_back(h3);
	lists.back().emplace_back(e31);
	lists.back().emplace_back(e32);
	
	
	//Merge using Min Heap 
	
	priority_queue<int, vector<int>, greater<int>> minHeap;
	
	for(auto l : lists){
		for(auto e : l){
			minHeap.push(e->val);
		}
	}
	
	Node* prehead = new Node();
	prehead->val = -1;
	prehead->next = NULL;
	
	Node* aux = prehead;
	
	Node* newNode = new Node();
	
	while(!minHeap.empty()){
		newNode->val = minHeap.top();
		newNode->next = NULL;
		cout << newNode->val << " ";
		aux->next = newNode;
		aux = aux->next;
		minHeap.pop();
	}
	
	//return prehead->next;
	
	return 0;
}
