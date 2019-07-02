#include <iostream>

using namespace std;

int main(void){
	
	int T;
	
	cin >> T;
	
	while(T--){
		int N;
		
		long long sum;
		
		cin >> N >> sum;
		
		long long a[N];
		
		int i;
		
		for(i = 0; i < N; i++){
			cin >> a[i];
		}
		
		int start = 0, currentSum = a[0];
		
		for(i = 1; i <= N; i++){
			while(currentSum > sum && start < i - 1){
				currentSum -= a[start];
				start++;
			}
			
			if(currentSum == sum){
				cout << start + 1 << " " << i << endl;
				break;
			} 
			
			if(i < N){
				currentSum += a[i];
			} else {
				cout << -1 << endl;
			}	
		}
	}
	
	return 0;
}
