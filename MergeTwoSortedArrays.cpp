#include <iostream>

using namespace std;


int main(void){
	
	int sizeOne, sizeTwo;
	
	int i, j, k;
	
	
	cin >> sizeOne >> sizeTwo;
	
	
	int firstOne[sizeOne], secondOne[sizeTwo];
	
	for(i = 0; i < sizeOne; i++){
		cin >> firstOne[i];
	}
	
	for(j = 0; j < sizeTwo; j++){
		cin >> secondOne[j];
	}	
	
	int newSize = sizeOne + sizeTwo;
	
	int thirdOne[newSize];
	
	i = 0, j = 0, k = 0;
	
	while(i < sizeOne && j < sizeTwo){
		if(firstOne[i] < secondOne[j]){
			thirdOne[k++] = firstOne[i++];
		} else {
			thirdOne[k++] = secondOne[j++];
		}
	}
	
	while(i < sizeOne){
		thirdOne[k++] = firstOne[i++];
	}
	
	while(j < sizeTwo){
		thirdOne[k++] = secondOne[j++];
	}
	
	for(k = 0; k < newSize; k++){
		cout << thirdOne[k] << " ";	
	}
		
	
	return 0;
}
