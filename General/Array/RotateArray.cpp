#include <iostream>

using namespace std;


int main(void){
	
	int T;
	
	cin >> T;
	
	int N, D;
	
	while(T--){
		cin >> N >> D;
		
		int a[N], i;
		
		for(i = 0; i < N; i++){
			cin >> a[i];
		}
		
		for(i = D; i < N; i++){
			cout << a[i] << " ";
		}
		
		for(i = 0; i < D; i++){
			cout << a[i] << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}
