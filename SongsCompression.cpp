/*#include <iostream>
#include <vector>
#include <utility>*/

#include <bits/stdc++.h>

using namespace std;


int main(void){
	
	int n, m;
	
	cin >> n >> m;
	
	vector<int> songs;
	
	int original, compressed;
	
	long long sumCompressed = 0;
	
	long long sumOriginal = 0;
	
	for(int i = 0; i < n; i++){
		cin >> original >> compressed;
		
		songs.emplace_back(original - compressed);
		
		sumCompressed += compressed;
		
		sumOriginal += original;
	}
	
	if(sumCompressed > m){
		cout << -1 << endl;
	} else if(sumOriginal <= m){
		cout << 0 << endl;	
	} else {
		sort(songs.begin(), songs.end(), greater<int>());
		
		int res = 0;
		
		for(auto x : songs){	
			sumOriginal -= x;
				
			res++;
			
			if(sumOriginal <= m){
				break;
			}
		}	
		
		cout << res << endl;
	}
	
	return 0;
}
