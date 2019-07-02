#include <iostream>

using namespace std;

int main(void){
	
	int a[8] = {1, 2, 3, 4, 5, 6, 7, 8}, i;
	
	memset(a, 0, sizeof(a));
	
	for(i = 0; i < 7; i++){
		cout << a[i] << ", ";
	}
	
	cout << a[i];
	
	return 0;
}
