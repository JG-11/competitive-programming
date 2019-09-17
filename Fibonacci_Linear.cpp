#include <iostream>
#include <cmath>

using namespace std;

int fibonacci(int number){
	double partial = (sqrt(5) + 1) / 2;
	
	int result = round(pow(partial, number) / sqrt(5));
	
	return result;
}

int main(void){
	
	int number;
	
	cin >> number;
	
	int result = fibonacci(number);
	
	cout << endl << result << endl;  

	return 0;
}
