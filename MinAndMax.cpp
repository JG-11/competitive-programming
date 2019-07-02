#include <iostream>

using namespace std;

int main(void){
	
	cout << "{1, 2, 3, 4, -5, -6}" << endl;
	
	cout << "Minimum value is: " << min({1, 2, 3, 4, -5, -6}) << endl;
	cout << "Maximum value is: " << max({1, 2, 3, 4, -5, -6}) << endl;
	
	int numberOne, numberTwo;
	
	cin >> numberOne >> numberTwo;
	
	cout << min(numberOne, numberTwo) << " is lower than " << 
		max(numberOne, numberTwo) << endl;
	
	return 0;
}
