#include <iostream>
#include <cmath>

using namespace std;


int main(void){
	
	int n;
	
	cin >> n;
	
	//Note: golden ratio, a.k.a. Binet's formula = (1 + sqrt(5)) / 2
	
	double goldenRatio = (1 + sqrt(5)) / 2;
	
	int result = round(pow(goldenRatio, n) / sqrt(5));
	
	cout << result << endl;
	
	return 0;
}
