#include <iostream>

using namespace std;


int main(void){
	
	int numbers[] = {1, 2, 3, 4};
	
	int sz = sizeof(numbers) / sizeof(numbers[0]);
	
	for(int i = 0; i < (1 << sz); i++){
		cout << "{";
		
		for(int j = 0; j < sz; j++){
			if((i & (1 << j)) != 0){
				cout << numbers[j] << ", ";
			}
		}	
		
		cout << "}" << endl;
	}
	
	return 0;
}
