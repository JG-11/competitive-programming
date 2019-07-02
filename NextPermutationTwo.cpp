#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	
	int T, N;
	
	cin >> T;
	
	for(int i = 0; i < T; i++){
		cin >> N;
		
		int a[N];
		
		for(int j = 0; j < N; j++){
			cin >> a[j];
		}
		
		if(next_permutation(a, a + N)){
			for(int k = 0; k < N - 1; k++){
				cout << a[k] << " ";
			}
			cout << a[N - 1];
		} else {
			reverse(a, a + N);
			for(int k = N - 1; k > 0; k--){
				cout << a[k] << " ";
			}
			cout << a[0];
		}
		
		cout << endl;
	}
	
	
	return 0;
}
