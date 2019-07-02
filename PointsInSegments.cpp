#include <iostream>
#include <vector>

//#include <bits/stdc++.h>

using namespace std;

int main(void){
	
	int n, m;
	
	cin >> n >> m;
	
	int l, r;
	
	int a[m];
	
	memset(a, 0, sizeof(a));
	
	bool flag = true;
	
	for(int i = 0; i < n; i++){
		cin >> l >> r;
		
		if(r - l == m - 1){
			flag = false;
		}
		
		if(l == r){
			a[l] = 1;
		} else {
			for(int i = l; i <= r; i++){
				a[i] = 1;
			}
		}
	}
	
	vector<int> nonVisited;
	
	if(!flag){
		cout << 0;
	} else {
		for(int i = 1; i <= m; i++){
			if(a[i] == 0){
				nonVisited.emplace_back(i);
			}
		}
		
		cout << nonVisited.size() << endl;
	
		for(int value : nonVisited){
			cout << value << " "; 
		}
	}
	
	return 0;
}
