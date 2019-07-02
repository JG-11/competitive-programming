#include <iostream>

//GCD = HCF -> Highest Common Factor

using namespace std;

int GCD(int a, int b){
	if(b == 0){
		return a;
	} else {
		return GCD(b, a % b);
	}
}

int main(void){
	
	int a, b;
	
	cin >> a >> b;
	
	cout << "GCD(" << a << ", " << b << ") = " << GCD(a, b) << endl;
	
	return 0;
}
