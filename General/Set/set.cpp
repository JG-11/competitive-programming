#include <iostream>
#include <unordered_set>

using namespace std;

int main(void){
	
	unordered_set<int> values;
	
	values.insert(1);
	values.insert(2);
	values.insert(3);
	
	for(auto x : values){
		cout << x << endl;
	}
	
	return 0;
}
