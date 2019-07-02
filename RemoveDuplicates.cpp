
#include <bits/stdc++.h>

using namespace std;

int main(void){
	
	int n, i;
	
	cin >> n;
	
	int array[n];
	
	set<int> nonRepeated;
	vector<int> answer;
	
	for(i = 0; i < n; i++){
		cin >> array[i];
	}
	
	for(i = n - 1; i >= 0; i--){
		if(!nonRepeated.count(array[i])){
			answer.emplace_back(array[i]);
		}
		nonRepeated.insert(array[i]);
	}
	
	reverse(answer.begin(), answer.end());
	
	cout << answer.size() << endl;
	
	for(i = 0; i < answer.size() - 1; i++){
		cout << answer[i] << " ";
	}
	
	cout << answer[answer.size() - 1];
	
	
	return 0;
}
