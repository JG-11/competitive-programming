#include <iostream>

using namespace std;

void subarrayWithGivenSum(int array[], int N, int S){
	
	int currentSum, start = 0, flag = 0;
	
	currentSum = array[start];
	
	for(int i = 1; i < N; i++){
		currentSum += array[i];
		
		while(currentSum > S){
			currentSum -= array[start];
			start++;
		}
		
		if(currentSum == S){
			cout << endl << start + 1 << " " << i + 1 << endl;
			flag = 1;
			break;
		}

	}
	
	if(flag == 0){
		cout << endl << -1 << endl;
	}
}


int main(void){
	
	int t, N, S;
	
	cin >> t;
	
	while(t--){
		cin >> N >> S;
		
		int array[N];
		
		for(int i = 0; i < N; i++){
			cin >> array[i];
		}
		
		subarrayWithGivenSum(array, N, S);
	}	
	
	return 0;
}
