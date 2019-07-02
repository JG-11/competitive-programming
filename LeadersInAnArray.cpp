#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(void){
	
	int T;
	
	cin >> T;
	
	int N;
	
	while(T--){
		cin >> N;
		
		int i, a[N];
		
		for(i = 0; i < N; i++){
			cin >> a[i];
		}
		
		int maxFromRight = a[N - 1];
		
		vector<int> res;
		
		res.emplace_back(maxFromRight);
				
		for(i = N - 2; i >= 0; i--){
			if(maxFromRight <= a[i]){
				maxFromRight = a[i];
				res.emplace_back(maxFromRight);
			}
		}
		
		reverse(res.begin(), res.end());
		
		for(auto z : res){
			cout << z << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}
