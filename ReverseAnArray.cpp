#include <iostream>
#include <algorithm>

using namespace std;


int main(void){
	
	int T;
	
	cin >> T;
	
	int N;
	
	while(T--){
		cin >> N;
		
		int a[N], i;
		
		for(i = 0; i < N; i++){
			cin >> a[i];
		}
		
		int start = 0, end = N - 1, aux;
		
		while(start < end){
			aux = a[start];
			a[start] = a[end];
			a[end] = aux;
			
			start++;
			end--;
		}
		
		for(i = 0; i < N; i++){
			cout << a[i] << " ";
		}
		
		cout << endl;
	}

	return 0;
}
