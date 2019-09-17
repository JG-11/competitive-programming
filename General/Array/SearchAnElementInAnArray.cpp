#include <iostream>

using namespace std;

int main(void){
	
	int T;
	
	cin >> T;
	
	while(T--){
		int N;
		
		cin >> N;
		
		int a[N], i;
		
		for(i = 0; i < N; i++){
			cin >> a[i];
		}
		
		int x;
		
		cin >> x;
		
		bool found = false;
		
		for(i = 0; i < N; i++){
			if(a[i] == x){
				cout << i << endl;
				found = true;
				break;
			}
		}
		
		if(!found){
			cout << -1 << endl;
		}	
	}
	
	
	return 0;
}
