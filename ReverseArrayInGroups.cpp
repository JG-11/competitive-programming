#include <iostream>

using namespace std;

int main(void){
	
	int T;
	
	cin >> T;
	
	int N, K, i, right, left;
	
	while(T--){
		cin >> N >> K;
		
		long long a[N];
		
		for(i = 0; i < N; i++){
			cin >> a[i];
		}
		
		for(i = 0; i < N; i += K){
			
			left = i;
			
			// to handle case when N is not multiple of K 
			right = min(i + K - 1, N - 1);
			
			// reverse the sub-array [left, right] 
			while(left < right){
				swap(a[left], a[right]);
				left++;
				right--;
			}
		}
		
		for(i = 0; i < N; i++){
			cout << a[i] << " ";
		}
		
		cout << endl;
	}
		
	return 0;
}
