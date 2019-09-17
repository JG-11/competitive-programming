#include <iostream>

using namespace std;


int main(void){
	
	int a[] = {1, 2, 3, 4, 5, 6, -8, -7, 9, -5};
	
	int s = sizeof(a) / sizeof(a[0]);
	
	cout << "{1, 2, 3, 4, 5, 6, -8, -7, 9, -5}" << endl;
	
	cout << "Size: " << s << endl;
	
	int down, up;
	
	cin >> down >> up;
	
	int* minimum = min_element(a + down, a + up);
	
	cout << "Min element between " << down << " and " << up <<
		" is " << *minimum << endl;
	
	int* maximum = max_element(a + down, a + up);
	
	cout << "Maximum element between " << down << " and " << up <<
		" is " << *maximum << endl;
	

	return 0;
}
