#include <iostream>
#include <queue>

using namespace std;

int main(void){
	priority_queue<int> pQ;
	
	pQ.push(10);
	pQ.push(20);
	pQ.push(5);
	
	cout << "Priority queue" << endl;
	
	while(!pQ.empty()){
		cout << pQ.top() << " ";
		pQ.pop();
	}
	
	//Min heap -> priority_queue<Type, vector<Type>, ComparisonType>
	
	priority_queue<int, vector<int>, greater<int>> minHeap;
	
	minHeap.push(30);
	minHeap.push(40);
	minHeap.push(25);
	
	cout << endl << "Min heap" << endl;
	
	while(!minHeap.empty()){
		cout << minHeap.top() << " ";
		minHeap.pop();
	}


	return 0;
}
