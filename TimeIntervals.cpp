#include <iostream>
#include <utility>
#include <vector>


using namespace std;


int main(void){
	
	int groups, firstOne, secondOne;
	
	cin >> groups;
	
	int result = 0;
	
	vector<pair<int, int>> intervals;
	
	for(int i = 0; i < groups; i++){
		cin >> firstOne >> secondOne;
		intervals.push_back({firstOne, secondOne});
		result += secondOne - firstOne;
	}
	
	cout << endl << result;
	
	return 0;
}
