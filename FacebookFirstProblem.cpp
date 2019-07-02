#include <iostream>

#define LIMIT 26

using namespace std;


int main(void){
	
	string number, compare;
	
	cin >> number;
	
	int result = 1;	
	
	for(int i = 0; i < number.length() - 1; i++){
		compare += number[i];
		compare += number[i + 1];
		
		if(stoi(compare) <= LIMIT){
			result += 1;
		}  
		
		cout << endl << compare;
		
		compare.clear();	
	}
	
	if(number.length() % 2 == 0 && result > 2){
		result += 1;
	} 
	
	cout << endl << result;


	return 0;

}
