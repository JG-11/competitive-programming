#include <iostream>

using namespace std;


int main(void){
	
	int size, i;
	
	cin >> size;
	
	int array[size];
	
	for(i = 0; i < size; i++){
		cin >> array[i];
	}
	
	sort(array, array + size);
	
	for(i = 0; i < size; i++){
		cout << array[i] << " ";
	}
	
	return 0;
}
