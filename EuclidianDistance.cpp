#include <iostream>
#include <cmath>

using namespace std;


int main(void){
	
	int x1, y1, x2, y2;
	
	cin >> x1 >> y1;
	
	cin >> x2 >> y2;
	
	int partialOne = x2 - x1;
	int partialTwo = y2 - y1;
	
	cout << endl << "Punto 1: (" << x1 << ", " << y1 << ")" << endl;
	cout << endl << "Punto 2: (" << x2 << ", " << y2 << ")" << endl;
	
	double d = sqrt((partialOne * partialOne) + (partialTwo * partialTwo));
	
	cout << endl << "d = " << d << endl;
	
	return 0;
}
