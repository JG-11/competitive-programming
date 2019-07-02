#include <iostream>
#include <algorithm>

using namespace std;


int main(void){
	
	int n;
	
	cin >> n;
	
	int array[n], i = 0, j;
	
	while(n--){
		cin >> array[i];
		i++;
	}
	
	cout << endl << "Disordered array" << endl;
	
	for(j = 0; j < i; j++){
		cout << array[j] << " ";
	}
	
	cout << endl << "Sorted array (ascending order)" << endl;
	
	sort(array, array + i);
	
	for(j = 0; j < i; j++){
		cout << array[j] << " ";
	} 
	
	cout << endl << "Sorted array (descending order)" << endl;
	
	sort(array, array + i, greater<int>());
	
	for(j = 0; j < i; j++){
		cout << array[j] << " ";
	}
	
	return 0;
}
