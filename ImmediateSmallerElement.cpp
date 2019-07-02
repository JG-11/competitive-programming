#include <iostream>
//#include <cstdio>

using namespace std;

int main(void){
	
	//freopen("ImmediateSmallerElement.txt", "r", stdin);
	
	int T, N;
	
	cin >> T;
	
	while(T--){
		cin >> N;
		
		int a[N];
		
		int differences[N];
		
		for(int i = 0; i < N; i++){
			cin >> a[i];
			
			if(i != 0){
				if(a[i - 1] > a[i]) {
					differences[i - 1] = a[i];
				} else {
					differences[i - 1] = -1;
				}
			} 
		}
		
		differences[N - 1] = -1;
		
		for(int i = 0; i < N; i++){
			cout << differences[i] << " ";
		}
		
		cout << endl;
	}
	
	
	return 0;
}
