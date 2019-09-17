#include <iostream>

using namespace std;

int main(void){
	
	int t, n, d;
	
	cin >> t;
	
	while(t--){
		cin >> n;
		
		int a[n];
		
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		cin >> d;
		
		if(d == n){
			for(int i = 0; i < n; i++){
				cout << a[i] << " ";
			}
		} else {
			for(int j = d; j < n; j++){
				cout << a[j] << " ";
			}
			
			for(int k = 0; k < d; k++){
				cout << a[k] << " ";
			}	
		}
		
		cout << endl;
	}
	
	return 0;
}
