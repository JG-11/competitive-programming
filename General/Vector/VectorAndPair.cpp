#include <iostream>
#include <vector>

using namespace std;


int main(void){
	
	vector<pair<int, int>> numbers;
	
	numbers.push_back({3, 4});
	
	for(auto i : numbers){
		cout << i.first << " " << endl;
	}
	
	
	return 0;
}
