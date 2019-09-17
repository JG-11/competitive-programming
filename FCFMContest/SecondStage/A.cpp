#include <bits/stdc++.h>
/*#include <iostream>
#include <algorithm>
#include <map>*/

using namespace std;

bool compare(const pair<int, int>&a, const pair<int, int>&b){
   return a.second < b.second;
}

int main(void){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int N, K, result, aux, i;
	
	cin >> N >> K;
	
	int a[N];
	
	map<int, int> frequencies;
	
	for(int i = 0; i < N; i++){
		cin >> a[i];
		frequencies[a[i]]++;
	}
	
	map<int, int>::iterator itr;
	
	if(frequencies.size() == 1){
		cout << N << " " << a[0];
	} else {
		result = max_element(frequencies.begin(), frequencies.end(), compare)->second;
	
		i = 0;
		
		for(itr = frequencies.begin(); itr != frequencies.end(); itr++){
			if(itr->second == result){
				aux = itr->first;
				break;
			}
			i++;
		}
		
		sort(a, a + N);
		
		while(i--){
			while(a[i] != aux){
				a[i]++;
				K--;
				
				if(K == 0){
					break;
				}		
			} 
			
			if(a[i] == aux){
				result += 1;
			}
			
			if(K == 0){
				break;
			}
		}
		
		cout << result << " " << aux;
	}
	
	return 0;
}
