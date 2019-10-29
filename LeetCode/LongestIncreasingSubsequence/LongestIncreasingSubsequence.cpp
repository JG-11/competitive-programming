#include <iostream>

using namespace std;


int main(void){
	
	int a[] = {1,3,6,7,9,4,10,5,6};
		
	
	//Algorithm
	
	int maximumSoFar, s = sizeof(a) / sizeof(a[0]);
	
	if(s == 0){
		maximumSoFar = 0;
	} else {
		
		int maxLength[s];
		
		for(int i = 0; i < s; i++){
			maxLength[i] = 1;
		}
		
		maximumSoFar = 1;
		
		
		for(int i = 1; i < s; i++){
			for(int j = 0; j < i; j++){
				if(a[i] > a[j]){
					maxLength[i] = max(maxLength[i], maxLength[j] + 1);
				}
			}
			
			maximumSoFar = max(maximumSoFar, maxLength[i]);
		}
		
	}
	
	cout << maximumSoFar << endl;
	
	
	return 0;
}
