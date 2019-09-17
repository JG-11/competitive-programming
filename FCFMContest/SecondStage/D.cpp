#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(void){
	
	int n, k, x, y;
	
	cin >> n >> k;
	
	set<pair<int, int>> coordinates;
	
	vector<int> answer;
	
	while(n--){
		cin >> x >> y;
		coordinates.insert(make_pair(x, y));
	}
	
	while(k--){
		cin >> x >> y;
		
		if(coordinates.count(make_pair(x, y))){
			answer.emplace_back(0);
		} else {
			answer.emplace_back(1);
		}
	}
	
	for(auto z : answer){
		cout << z << endl;
	}
	
	return 0;
}
